
@echo off
"C:\Program Files\Unity\Hub\Editor\2021.3.2f1\Editor\Data\PlaybackEngines\WebGLSupport\BuildTools\Emscripten\emscripten\emcc.bat" %* < nul
exit %ERRORLEVEL%
