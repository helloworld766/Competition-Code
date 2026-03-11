\#项目名:my\_hash\_chaintable

&nbsp;	##模块1:create\_hash

&nbsp;			###功能:输入max\_len,创建一个hash表，共有max\_len个桶

&nbsp;	##模块2:add\_to\_hash

&nbsp;			###功能:将数字num加入hash表对应位置

&nbsp;	##模块3:inquiry

&nbsp;			###功能:查询数字num是否在hash表中

&nbsp;	##模块4:show\_hash

&nbsp;			###功能:展示hash表中所有元素

&nbsp;	##主函数:

&nbsp;			###扫描max\_len

&nbsp;			###持续接收num

&nbsp;			###持续查询num

&nbsp;			###展示hash表



\*思路\*

&nbsp;	\*\*在hash表中用链表解决了hash collision



\*可优化的地方\*

&nbsp;	\*\*:添加内存释放功能(现在会内存泄露)

&nbsp;	\*\*:添加去重(统计)功能

&nbsp;	\*\*:链表换为红黑树(不会，哈哈哈)

