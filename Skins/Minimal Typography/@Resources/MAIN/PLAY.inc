[Rainmeter]
ContextTitle2="Edit MAIN"
ContextAction2=["#@#/MAIN/PLAY.inc"]
MouseOverAction=!Execute [!HideMeter Mstring][!ShowMeter Mstring2][!redraw]
MouseLeaveAction=!Execute [!HideMeter Mstring2][!ShowMeter Mstring][!redraw]
LeftMouseUpAction=!CommandMeasure mPlayer OpenPlayer

[mPlayer]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#Player#
PlayerPath=#PlayerExe#
PlayerType=Title
DisableLeadingZero=1

[mArtist]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[mPlayer]
PlayerType=Artist

[mAlbum]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[mPlayer]
PlayerType=Album

[mYear]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[mPlayer]
PlayerType=Year

[mGenre]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[mPlayer]
PlayerType=Genre

[Mtitle]
Meter=String
MeterStyle=Style1
MeasureName=mArtist

[Mstring]
Meter=String
MeterStyle=Style2
MeasureName=mPlayer

[Mstring2]
Meter=String
MeterStyle=Style2
MeasureName=mAlbum
MeasureName2=mYear
MeasureName3=mGenre
Text="%1 (%2) / %3"
Hidden=1
Group=Hidden | Hide