
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

# 设置中文显示
plt.rcParams['font.sans-serif'] = ['SimHei']  # 用来正常显示中文标签
plt.rcParams['axes.unicode_minus'] = False  # 用来正常显示负号

# 读取数据
df_discharge = pd.read_excel('nasa_data1.xlsx', sheet_name='放电曲线样本')
df_capacity = pd.read_excel('nasa_data1.xlsx', sheet_name='容量衰减数据')

# 转换容量数据为数值类型
df_capacity['容量(Ah)'] = pd.to_numeric(df_capacity['容量(Ah)'], errors='coerce')

# 获取指定周期的数据（可以修改为其他周期文件）
cycle_file = '00001.csv'  # 可以修改为 '00005.csv', '00009.csv', '00013.csv', '00017.csv'
cycle_data = df_discharge[df_discharge['周期文件'] == cycle_file].copy().sort_values('时间(s)')

# 获取该周期对应的电池容量
cycle_capacity = df_capacity[df_capacity['文件名'] == cycle_file]['容量(Ah)'].values[0]
print(f"周期 {cycle_file} 的电池容量：{cycle_capacity:.4f} Ah")

# 计算时间间隔（秒）
cycle_data['时间间隔(s)'] = cycle_data['时间(s)'].diff().fillna(0)

# 计算每个时间间隔放出的电量（Ah）
cycle_data['放出电量(Ah)'] = cycle_data['电流(A)'].abs() * cycle_data['时间间隔(s)'] / 3600

# 累计放出的电量
cycle_data['累计放出电量(Ah)'] = cycle_data['放出电量(Ah)'].cumsum()

# 计算SOC (%)
cycle_data['SOC(%)'] = 100 - (cycle_data['累计放出电量(Ah)'] / cycle_capacity * 100)

# 限制SOC在0-100%之间
cycle_data['SOC(%)'] = np.clip(cycle_data['SOC(%)'], 0, 100)

# 绘制SOC和电压的关系曲线
plt.figure(figsize=(12, 8))
plt.plot(cycle_data['SOC(%)'], cycle_data['电压(V)'], 'b-', linewidth=2)

# 添加标题和标签
plt.title(f'电池SOC与电压关系曲线 ({cycle_file})', fontsize=16)
plt.xlabel('SOC (%)', fontsize=14)
plt.ylabel('电压 (V)', fontsize=14)
plt.grid(True, linestyle='--', alpha=0.7)

# 设置坐标轴范围
plt.xlim(0, 100)
plt.ylim(2.4, 4.3)  # 根据数据调整电压范围

# 添加数据点标记
plt.scatter(cycle_data['SOC(%)'], cycle_data['电压(V)'], s=10, c='red', alpha=0.5)

# 添加容量信息
plt.text(5, 4.25, f'电池容量: {cycle_capacity:.4f} Ah', fontsize=12, 
         bbox=dict(facecolor='white', alpha=0.8))

# 保存图片
plt.savefig('soc_vs_voltage_curve.png', dpi=300, bbox_inches='tight')

# 显示图形
plt.tight_layout()
plt.show()

# 打印部分数据作为参考
print("\n数据样本（前10行）：")
print(cycle_data[['时间(s)', '电压(V)', '电流(A)', 'SOC(%)']].head(10))

print("\n数据样本（后10行）：")
print(cycle_data[['时间(s)', '电压(V)', '电流(A)', 'SOC(%)']].tail(10))
