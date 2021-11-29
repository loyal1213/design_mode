#初始状态在C盘中，更改路径
C:\Users\lenovo>F:
F:\>
F:\>cd MyProject
F:\MyProject>
#初始化Git项目，成功后创建有一个.git隐藏文件
F:\MyProject>git init
Initialized empty Git repository in F:/MyProject/.git/
#在文件夹MyProject中添加一个文本文件README，md格式指Markdown格式（建议使用Notepad++编辑）
#然后输入以下命令将文件加入暂存区
F:\MyProject>git add README.md
#将文件提交到git仓库（-m表示添加本次提交的说明，强制要求写的）
F:\MyProject>git commit -m "add a readme file"
[master (root-commit) 9e08cf4] add a readme file
 1 file changed, 1 insertion(+)
 create mode 100644 README.md