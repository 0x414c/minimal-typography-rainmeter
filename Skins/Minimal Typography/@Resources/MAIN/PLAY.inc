[Rainmeter]
LeftMouseUpAction=!CommandMeasure "mPlayer" "OpenPlayer"

[mPlayer]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=#Player#
PlayerPath=#Playerexe#
PlayerType=TITLE

[mArtist]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[mPlayer]
PlayerType=ARTIST

[Mtitle]
Meter=String
MeasureName=mArtist
MeterStyle=Style1
PreFix=

[Mstring]
Meter=String
MeterStyle=Style2
MeasureName=mPlayer