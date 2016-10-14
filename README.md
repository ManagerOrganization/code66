![code66 logo](./code66.jpeg "code66")

Code 66 !
===================


Code66 是一款微信插件，虽然我不知道它最后的功能会有多少，但是它现在至少可以秒抢微信红包了。对了，其实它更重要的意义在于是我学习iOS逆向工程的产物。

-------------------

##功能

- 秒抢红包
- 延时抢红包

##目录结构
code66 

- Package/  
	- Package/ 
		- Applications/ 
			- AutoWXHB.app            __(控制App主体)__
		- DEBIAN/
			- control                        __(打包为.deb的描述信息)__
		- Library/
			- MobileSubstrate/
				- DynamicLibraries/
				 - wxTweak.dylib       __(tweak插件)__
				 - wxTweak.plist   
	- build.sh  (build 脚本)
	- code66.deb                        __(最终生成的安装包)__
- WeChatHelperCode\ 
	 - App/            __(控制程序App代码)__
	 - tweak/         __(tweak代码)__
	 - WeChat.h/   __(微信头文件)__

- README.md

##使用说明
简单说最终目标是把我们写的控制App和插件动态库打包为一个deb，并安装。

1. WeChatHelperCode/App/ 下是控制App的工程，正常编译，然后把生成的AutoWXHB.app 复制到Package/Package/Applications/下。  

2.  WeChatHelperCode/tweak/ 下是插件的代码，进去直接make，会生成一个隐藏目录 .theos, 在 .theos/obj/debug/ 下有动态库wxTweak.dylib , 把动态库复制到 Package/Package/Library/MobileSubstrate/DynamicLibraries/ 下。 

3.  再执行Package/ 下的 build.sh,  会直接生成code66.deb，就是我们最后要安装的deb。 

4.  打开PP助手之类的工具，直接把code66.deb放到文件系统根目录。当然你也可以用终端ssh到你的手机，然后scp到根目录，你高兴就好。

5.  用手机上的iFile到手机根目录下找到code66.deb，点击，然后install。

6.  进Cydia，找到你装的AppSync，重新安装。重安完重启SpringBoard。之后就可以在桌面上看到我们的App了，当然我们的tweak也就生效了。

