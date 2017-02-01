[Rainmeter]
@include=#@#/var.txt
Update=300000
DynamicWindowSize=1
BackgroundMode=2
SolidColor=255,255,255,1
ContextTitle2=Edit MAIN file
ContextAction2=[notepad "#@#/MAIN/HDD.inc"]
LeftMouseUpAction=#current#
MouseOverAction=!Execute [!HideMeter Mstring][!ShowMeter Mstring2][!redraw]
MouseLeaveAction=!Execute [!HideMeter Mstring2][!ShowMeter Mstring][!redraw]

[drive]
Measure=FreeDiskSpace
Drive=#current#

[drivel]
Measure=FreeDiskSpace
Drive=#current#
Label=1
Update=-1

[Mtitle]
Meter=String
MeasureName=drivel
MeterStyle=Style1
Text=%1 (#current#)

[Mstring]
X=[Mtitle:W]
Meter=String
MeterStyle=Style2
MeasureName=drive
Percentual=1
Text=%1%
DynamicVariables=1

[Mstring2]
X=r
Meter=String
MeterStyle=Style2
MeasureName=drive
AutoScale=0
Scale=1073741824
Hidden=1