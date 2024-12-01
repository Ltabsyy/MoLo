# MoLo CodeBlack

MoLo主题，是一款在小熊猫C++ 2.26开始内置的配色方案及周边配置。

## 使用说明

**后缀名.scheme的为配色文件**

**使用方法：**

进入小熊猫工具-选项-编辑器-配色，

在省略号内导入配色并确定。

**批量导入：**

进入小熊猫工具-选项-环境-文件夹/恢复出厂设置，

点击配置文件夹右侧图标进入配置文件夹，

进入scheme文件夹（没有则自行创建），

将配色文件粘贴入此处，

随后重启小熊猫，即可在工具-选项-编辑器-配色中选择配色。

**后缀名.json的为主题文件**

**使用方法：**

进入小熊猫工具-选项-环境-文件夹/恢复出厂设置，

点击自定义主题文件夹右侧图标进入自定义主题文件夹，

将主题文件粘贴入此处，

随后确定并重新进入工具-选项-环境-外观，即可选择主题。

（3.0版存在bug，第一次会无法进入自定义主题文件夹，在工具-选项-环境-外观任意对一个主题点击自定义即可）

（2.26以前版本，需先在工具-选项-环境-外观中勾选使用自定义主题，并确定）

## 主题介绍
MoLo主题是一款深邃、鲜艳、有区分度的小熊猫C++配色，其为深色模式配色，并为MoLo CodeBlack配色版本。

MoLo CBLight是一款区分类型关键字和其他关键字，整体更亮但较不美观的MoLo CodeBlack平替配色，也加入了小熊猫官方。

MoLo CBOut是尽量维持MoLo CodeBlack配色不变，用于复制到Word，在白纸上打印阅读的配色，未加入也不打算加入小熊猫。

MoLo PureDark是一款针对色盲设计的具有较高元素区分度的配色方案，考虑到色盲种类繁多，该配色仅有黑白色调，不加入小熊猫。

MoLo Console是由MoLo CodeBlack配色映射到最近的16控制台颜色而成的配色，可体现MoLo CodeBlack配色的元素区分理念，不加入小熊猫。

MoLo CWOut是大幅改变配色，但保留MoLo CodeBlack色调不变，更好的满足复制到Word，在白纸上打印阅读需求的配色，正式名称为MoLo Mia，已加入小熊猫官方。

## 发展历程

### 起步阶段
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

### 中期阶段
Ltabsyy深知一个配色具有复制到Word，在白纸上打印、阅读的需求，而MoLo系列配色均基于黑色背景，色彩较亮的配色需要微调才可看清，故Ltabsyy基于MoLo CodeBlack配色进行7项修改，在2024年1月20日推出MoLo CBOut配色。

Ltabsyy思考由于色盲群体的存在，原本色彩区分的理念无法惠及至全部群体。考虑到色盲种类繁多，故基于全色盲进行考虑，限制配色仅可用黑白色调。考虑到不能辨识颜色的人必然对亮度更敏感，故将元素区分设计由颜色域转为亮度域，在2024年1月24日推出MoLo PureDark配色。

Ltabsyy假想一个色彩极差的显示系统，例如在控制台上，仅有16种颜色，若配色颜色映射到其最近的控制台16颜色，还能做到元素区分，那可很好的体现一个配色在任意平台上的元素区分能力，故在2024年2月8日推出MoLo Console配色。

Ltabsyy观察到除了VS Code的现代深色色系，还有不少用户喜欢One Dark色系，其是一个以红色为主色调，以红蓝撞色为主要特征，整体不浅不深的中色性配色。2024年2月3日，天依蓝大致实现了One Dark配色，Ltabsyy在其基础上做扩展探索，并将One Dark翻译为原深，在2024年2月8日实现One Dark Extend，即原深扩展配色。

随后，Ltabsyy将扩展探索由原深色系转向墨落色系，改变了近乎所有颜色，以实现在浅色背景下的美观，在2024年3月29日推出MoLo CBOut2配色。

Ltabsyy在制作MoLo Console时，观察到全局变量的前景色与当前高亮单词的背景色无区分，故产生纯前景高亮单词和红括号匹配构想，在2024年3月28日推出MoLo Console v2版本，在2024年3月29日推出MoLo CodeBlack v2和MoLo CBLight v2。MoLo Console v2替换了本仓库的旧版本，其余旧版本保留。MoLo CBLight v2替换了小熊猫的旧版本以作尝试，MoLo CodeBlack未改变。

随后，Ltabsyy产生阴阳配色构想，由MoLo CodeBlack颜色作为阴极配色，微调MoLo CBOut2作为阳极配色。后续在2024年3月30日完成阳极配色MoLo CWOut，在2024年3月31日完成阴极配色MoLo CBOut3。阳极配色后微调并起正式名称MoLo Mia，在2024年4月25日加入小熊猫以满足复制到Word需求并作进一步测试。
