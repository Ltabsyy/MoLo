# MoLo CodeBlack

MoLo主题，是一款已经在小熊猫C++ 2.26beta1内置的配色方案及周边配置。

## 发展历程
MoLo的中文名为“墨落”，是Ltabsyy基于墨落成白的设计配色color_MLCB推动并发展而来的。
我(Ltabsyy)十分喜欢VS Code的现代深色主题，但总觉得差些意思。小熊猫C++相较VS Code是一款极其适合新手的IDE，它的深色主题是基于VS Code配色的，但由于Windows标题栏颜色的限制，目前比VS Code略逊一筹，令我较为惋惜。当时写下的小熊猫长期建议第5条原文如下：
`5.更一体化的深色模式界面，例如不依赖系统的黑色标题栏，更深邃的背景黑色设计（小熊猫非代码部分背景略泛蓝）`
2023年11月17日，墨落成白在分享代码中无意展示了自己调制的一套配色方案，令我兴奋不已，当晚想出了MoLo CodeBlack的配色名称和MoLo主题名称。
后续与墨落成白交涉，在11月24日凌晨索取了其配色文件color_MLCB.scheme，匆忙暂定了该版本MLCB Black的名称，由Ltabsyy单独深夜研究。
Ltabsyy给出6条建议，并正式提出了MoLo CodeBlack名称，墨落成白参考修改。同时Ltabsyy基于Intellij Classic的元素颜色区分理念设计了MoLo CBMark配色。
墨落成白吸收了部分建议和CBMark配色设计，制作了MoLo CodeBlack_beta，二人舍弃旧配色，统一版本。
Ltabsyy打包“拟新增墨落主题与深色主题对比图”在小熊猫群内预览。
Ltabsyy对beta提出6条建议，并据1,3-6建议在2023年11月24日15点39分27秒制作了MoLo CodeBlack_beta2，墨落成白同意去除beta2后缀，该版本为流传至今使用的版本。
Ltabsyy对beta2的不足后续做过不少尝试，无法修改，但将其探索打包为了MoLo CBLight配色。
Ltabsyy试图推动MoLo CodeBlack成为一个主题而不只是配色，便编写了主题json文件，说明文件，根据beta2重置对比图，并打包“MoLo CodeBlack配色方案体验包”,由墨落成白在小熊猫群内发布。
MoLo主题为高对比度主题，新外观图标集，MoLo CodeBlack配色方案组合而成，但原版高对比度主题略有瑕疵。11月25日，Ltabsyy成功基于MoLo主题的需求更改了Contrast的主题配色，基于这些更改重制了主题json文件。
11月26日凌晨Ltabsyy打包“MoLo主题整合包1”，在小熊猫群内发布。
Ltabsyy计划将MoLo主题整体加入小熊猫官方主题和配色，便苦苦等待。
2023年12月22日，cyano.CN提交了错误名称的PR并在小熊猫群内发布。
2024年1月2日，Ltabsyy在荣誉天定帮助下根据小熊猫最新源代码编译2.26alpha8并在小熊猫群内发布。
2024年1月18日，Ltabsyy提交了正确的PR并成功合并，此后小熊猫作者编译发布了2.26beta1，MoLo主题正式加入小熊猫！

## 主题介绍
MoLo主题是一款深邃、鲜艳、有区分度的小熊猫C++配色，其为深色模式配色，并为MoLo CodeBlack配色版本。

MoLo CBLight是一款区分类型关键字和其他关键字，整体更亮但较不美观的MoLo CodeBlack平替配色，也加入了小熊猫官方。

MoLo CBOut是尽量维持MoLo CodeBlack配色不变，用于复制到Word，在白纸上打印阅读的配色，未加入也不打算加入小熊猫。

MoLo PureDark是一款针对色盲设计的具有较高元素区分度的配色方案，考虑到色盲种类繁多，该配色仅有黑白色调，不加入小熊猫。