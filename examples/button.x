main.lua                                                                                            000664  001750  001750  00000000552 12707043344 015675  0                                                                                                    ustar 00jiangjianjun                    jiangjianjun                    000000  000000                                                                                                                                                                         local stage = Stage.new()

local button = Widget.Button.new({x = 100, y = 100, width = 100, height = 50})
	:addEventListener("Press", function(d, e) print("Button [Press]") end)
	:addEventListener("Release", function(d, e) print("Button [Release]") end)
	:addEventListener("Click", function(d, e) print("Button [Click]") end)
stage:addChild(button)

stage:loop()                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      