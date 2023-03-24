#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

alias ls='ls --color=auto'
PS1='[\u@\h \W]\$ '
setxkbmap us -variant colemak
export EDITOR='vim'
export VISUAL='gedit'
export PS1="\e[0;35m[\u@\e[0;32m\h \e[0;35m\W]\[\e[0m\]\$ "
export SDL_GAMECONTROLLERCONFIG="
03000e7b9b2800006000000001010000,raphnet technologies GC/N64 to USB v3.6,platform:Linux,a:b0,b:b1,start:b3,leftshoulder:b4,rightshoulder:b5,dpup:b10,dpdown:b11,dpleft:b12,dpright:b13,leftx:a0,lefty:a1,-rightx:b8,+rightx:b9,-righty:b6,+righty:b7,lefttrigger:b2,
"
