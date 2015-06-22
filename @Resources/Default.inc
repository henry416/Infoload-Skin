[Variables]
fontName=Trebuchet MS
textSize=8
colorText=255,255,255,255
cpu1Color=255, 0, 0, 85
cpu2Color=255, 255, 0, 85
cpu3Color=0, 255, 0, 85
cpu4Color=0, 0, 255, 85
avgCpuColor=255, 255, 255, 85
@Include=#@#\HWiNFO.inc


; ----------------------------------
; STYLES are used to "centralize" options
; ----------------------------------

[styleTitle]
StringAlign=Center
StringCase=Upper
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,50
FontColor=#colorText#
FontFace=#fontName#
FontSize=10
AntiAlias=1
ClipString=1

[styleTinyLabelText]
StringAlign=Left
StringCase=None
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorText#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1

[styleLeftText]
StringAlign=Left
StringCase=None
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorText#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1

[styleRightText]
StringAlign=Right
StringCase=None
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorText#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1

[styleTempText]
StringAlign=Right
StringCase=None
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1

[styleUsageBar]
BarOrientation=HORIZONTAL
SolidColor=255,255,255,15
W=85
H=6

[HWiNFOGraphStyle]
LineColor=255, 0, 0, 200
LineColor2=255, 255, 0, 200
LineColor3=0, 255, 0, 200
LineColor4=0, 0, 255, 200
LineColor5=255, 255, 255, 200
SolidColor=96, 96, 96, 96
W=250
H=50
AntiAlias=1