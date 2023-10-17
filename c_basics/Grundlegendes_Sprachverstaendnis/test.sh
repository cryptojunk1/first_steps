@echo off
cls
ASK Moechten Sie Ihre Festplatte formatieren?
IF ERRORLEVEL 2 GOTO NO
IF ERRORLEVEL 1 GOTO YES
GOTO END
:YES
ECHO Fahre fort mit Formatieren ...
ECHO (Okay, war nur ein Spass)
GOTO END
:NO
ECHO Okay, ich formatiere nicht.
:END