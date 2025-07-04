gcc game.c game_funcs.c -o game
if %errorlevel% == 0 ( game.exe ) else ( echo failed to build )