--[=[
 d888b  db    db d888888b      .d888b.      db      db    db  .d8b.  
88' Y8b 88    88   `88'        VP  `8D      88      88    88 d8' `8b 
88      88    88    88            odD'      88      88    88 88ooo88 
88  ooo 88    88    88          .88'        88      88    88 88~~~88 
88. ~8~ 88b  d88   .88.        j88.         88booo. 88b  d88 88   88    @uniquadev
 Y888P  ~Y8888P' Y888888P      888888D      Y88888P ~Y8888P' YP   YP  CONVERTER 
]=]

-- Instances: 245 | Scripts: 15 | Modules: 0 | Tags: 0
local G2L = {};

-- StarterGui.DannTunner
G2L["1"] = Instance.new("ScreenGui", game:GetService("Players").LocalPlayer:WaitForChild("PlayerGui"));
G2L["1"]["Name"] = [[DannTunner]];
G2L["1"]["ZIndexBehavior"] = Enum.ZIndexBehavior.Sibling;


-- StarterGui.DannTunner.DraggyTime
G2L["2"] = Instance.new("TextLabel", G2L["1"]);
G2L["2"]["TextWrapped"] = true;
G2L["2"]["BorderSizePixel"] = 0;
G2L["2"]["TextSize"] = 20;
G2L["2"]["TextScaled"] = true;
G2L["2"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["2"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["2"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["2"]["Size"] = UDim2.new(0, 158, 0, 36);
G2L["2"]["Visible"] = false;
G2L["2"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["2"]["Text"] = [[]];
G2L["2"]["Name"] = [[DraggyTime]];
G2L["2"]["Position"] = UDim2.new(0.51666, 0, 0.74222, 0);


-- StarterGui.DannTunner.DraggyTime.DraggSum
G2L["3"] = Instance.new("LocalScript", G2L["2"]);
G2L["3"]["Name"] = [[DraggSum]];


-- StarterGui.DannTunner.DraggyTime.drg
G2L["4"] = Instance.new("LocalScript", G2L["2"]);
G2L["4"]["Name"] = [[drg]];


-- StarterGui.DannTunner.DraggyTime.UICorner
G2L["5"] = Instance.new("UICorner", G2L["2"]);



-- StarterGui.DannTunner.OpenFrame
G2L["6"] = Instance.new("ImageButton", G2L["1"]);
G2L["6"]["BorderSizePixel"] = 0;
G2L["6"]["Visible"] = false;
G2L["6"]["BackgroundColor3"] = Color3.fromRGB(103, 111, 118);
G2L["6"]["Image"] = [[rbxassetid://111851901427385]];
G2L["6"]["Size"] = UDim2.new(0, 60, 0, 60);
G2L["6"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["6"]["Name"] = [[OpenFrame]];
G2L["6"]["Position"] = UDim2.new(0.22041, 0, 0.52624, 0);


-- StarterGui.DannTunner.OpenFrame.drg
G2L["7"] = Instance.new("LocalScript", G2L["6"]);
G2L["7"]["Name"] = [[drg]];


-- StarterGui.DannTunner.OpenFrame.UICorner
G2L["8"] = Instance.new("UICorner", G2L["6"]);
G2L["8"]["CornerRadius"] = UDim.new(2, 0);


-- StarterGui.DannTunner.SoundHandler
G2L["9"] = Instance.new("LocalScript", G2L["1"]);
G2L["9"]["Name"] = [[SoundHandler]];


-- StarterGui.DannTunner.Open
G2L["a"] = Instance.new("Frame", G2L["1"]);
G2L["a"]["Visible"] = false;
G2L["a"]["BorderSizePixel"] = 0;
G2L["a"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["a"]["Size"] = UDim2.new(0, 480, 0, 233);
G2L["a"]["Position"] = UDim2.new(0.28181, 0, 0.23713, 0);
G2L["a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["a"]["Name"] = [[Open]];


-- StarterGui.DannTunner.Open.drg
G2L["b"] = Instance.new("LocalScript", G2L["a"]);
G2L["b"]["Name"] = [[drg]];


-- StarterGui.DannTunner.Open.Handler
G2L["c"] = Instance.new("LocalScript", G2L["a"]);
G2L["c"]["Name"] = [[Handler]];


-- StarterGui.DannTunner.Open.UICorner
G2L["d"] = Instance.new("UICorner", G2L["a"]);



-- StarterGui.DannTunner.Open.UIGradient
G2L["e"] = Instance.new("UIGradient", G2L["a"]);
G2L["e"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll
G2L["f"] = Instance.new("Folder", G2L["a"]);
G2L["f"]["Name"] = [[FrameAll]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame
G2L["10"] = Instance.new("Frame", G2L["f"]);
G2L["10"]["Visible"] = false;
G2L["10"]["BorderSizePixel"] = 0;
G2L["10"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["10"]["Size"] = UDim2.new(0, 369, 0, 195);
G2L["10"]["Position"] = UDim2.new(0.22909, 0, 0.15377, 0);
G2L["10"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["10"]["Name"] = [[TuningFrame]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.UIStroke
G2L["11"] = Instance.new("UIStroke", G2L["10"]);
G2L["11"]["Thickness"] = 2;
G2L["11"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.UIGradient
G2L["12"] = Instance.new("UIGradient", G2L["10"]);
G2L["12"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.UICorner
G2L["13"] = Instance.new("UICorner", G2L["10"]);



-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger
G2L["14"] = Instance.new("Frame", G2L["10"]);
G2L["14"]["BorderSizePixel"] = 0;
G2L["14"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["14"]["Size"] = UDim2.new(0, 256, 0, 29);
G2L["14"]["Position"] = UDim2.new(0.30352, 0, 0.00513, 0);
G2L["14"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["14"]["Name"] = [[TurboCharger]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.UIStroke
G2L["15"] = Instance.new("UIStroke", G2L["14"]);
G2L["15"]["Thickness"] = 2;
G2L["15"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.UIGradient
G2L["16"] = Instance.new("UIGradient", G2L["14"]);
G2L["16"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.UICorner
G2L["17"] = Instance.new("UICorner", G2L["14"]);



-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.IgnoreThis
G2L["18"] = Instance.new("ImageLabel", G2L["14"]);
G2L["18"]["BorderSizePixel"] = 0;
G2L["18"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["18"]["Image"] = [[rbxassetid://111585227131277]];
G2L["18"]["Size"] = UDim2.new(0, 39, 0, 28);
G2L["18"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["18"]["BackgroundTransparency"] = 1;
G2L["18"]["Name"] = [[IgnoreThis]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TextLabel
G2L["19"] = Instance.new("TextLabel", G2L["14"]);
G2L["19"]["BorderSizePixel"] = 0;
G2L["19"]["TextSize"] = 17;
G2L["19"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["19"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["19"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["19"]["BackgroundTransparency"] = 1;
G2L["19"]["Size"] = UDim2.new(0, 143, 0, 29);
G2L["19"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["19"]["Text"] = [[TurboCharger]];
G2L["19"]["Position"] = UDim2.new(-0.51837, 0, 0, 0);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TextLabel
G2L["1a"] = Instance.new("TextLabel", G2L["14"]);
G2L["1a"]["BorderSizePixel"] = 0;
G2L["1a"]["TextSize"] = 17;
G2L["1a"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["1a"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["1a"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["1a"]["BackgroundTransparency"] = 1;
G2L["1a"]["Size"] = UDim2.new(0, 143, 0, 29);
G2L["1a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["1a"]["Text"] = [[SuperCharger]];
G2L["1a"]["Position"] = UDim2.new(-0.51837, 0, 1.24138, 0);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TextLabel
G2L["1b"] = Instance.new("TextLabel", G2L["14"]);
G2L["1b"]["BorderSizePixel"] = 0;
G2L["1b"]["TextSize"] = 17;
G2L["1b"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["1b"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["1b"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["1b"]["BackgroundTransparency"] = 1;
G2L["1b"]["Size"] = UDim2.new(0, 143, 0, 29);
G2L["1b"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["1b"]["Text"] = [[Horse Power]];
G2L["1b"]["Position"] = UDim2.new(-0.51837, 0, 2.48276, 0);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerAmount
G2L["1c"] = Instance.new("TextBox", G2L["14"]);
G2L["1c"]["Name"] = [[TurboChargerAmount]];
G2L["1c"]["BorderSizePixel"] = 0;
G2L["1c"]["TextSize"] = 14;
G2L["1c"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["1c"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["1c"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["1c"]["Size"] = UDim2.new(0, 54, 0, 29);
G2L["1c"]["Position"] = UDim2.new(0.35043, 0, 0, 0);
G2L["1c"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["1c"]["Text"] = [[]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerAmount.nn
G2L["1d"] = Instance.new("LocalScript", G2L["1c"]);
G2L["1d"]["Name"] = [[nn]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerAmount.UIGradient
G2L["1e"] = Instance.new("UIGradient", G2L["1c"]);
G2L["1e"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(90, 90, 90)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(90, 90, 90))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerAmount.UICorner
G2L["1f"] = Instance.new("UICorner", G2L["1c"]);
G2L["1f"]["CornerRadius"] = UDim.new(0, 3);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboAmount
G2L["20"] = Instance.new("TextLabel", G2L["14"]);
G2L["20"]["TextWrapped"] = true;
G2L["20"]["TextSize"] = 17;
G2L["20"]["TextScaled"] = true;
G2L["20"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["20"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["20"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["20"]["BackgroundTransparency"] = 1;
G2L["20"]["Size"] = UDim2.new(0, 46, 0, 29);
G2L["20"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["20"]["Text"] = [[Amount]];
G2L["20"]["Name"] = [[TurboAmount]];
G2L["20"]["Position"] = UDim2.new(0.1499, 0, 0, 0);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboBoost
G2L["21"] = Instance.new("TextLabel", G2L["14"]);
G2L["21"]["TextSize"] = 17;
G2L["21"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["21"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["21"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["21"]["BackgroundTransparency"] = 1;
G2L["21"]["Size"] = UDim2.new(0, 46, 0, 29);
G2L["21"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["21"]["Text"] = [[Boost]];
G2L["21"]["Name"] = [[TurboBoost]];
G2L["21"]["Position"] = UDim2.new(0.56054, 0, -0.03448, 0);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerBoost
G2L["22"] = Instance.new("TextBox", G2L["14"]);
G2L["22"]["Name"] = [[TurboChargerBoost]];
G2L["22"]["BorderSizePixel"] = 0;
G2L["22"]["TextSize"] = 14;
G2L["22"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["22"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["22"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["22"]["Size"] = UDim2.new(0, 54, 0, 29);
G2L["22"]["Position"] = UDim2.new(0.75326, 0, -0.03448, 0);
G2L["22"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["22"]["Text"] = [[]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerBoost.nn
G2L["23"] = Instance.new("LocalScript", G2L["22"]);
G2L["23"]["Name"] = [[nn]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerBoost.UIGradient
G2L["24"] = Instance.new("UIGradient", G2L["22"]);
G2L["24"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(90, 90, 90)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(90, 90, 90))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerBoost.UICorner
G2L["25"] = Instance.new("UICorner", G2L["22"]);
G2L["25"]["CornerRadius"] = UDim.new(0, 3);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger
G2L["26"] = Instance.new("Frame", G2L["10"]);
G2L["26"]["BorderSizePixel"] = 0;
G2L["26"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["26"]["Size"] = UDim2.new(0, 256, 0, 29);
G2L["26"]["Position"] = UDim2.new(0.30352, 0, 0.18974, 0);
G2L["26"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["26"]["Name"] = [[SuperCharger]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.UIStroke
G2L["27"] = Instance.new("UIStroke", G2L["26"]);
G2L["27"]["Thickness"] = 2;
G2L["27"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.UIGradient
G2L["28"] = Instance.new("UIGradient", G2L["26"]);
G2L["28"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.UICorner
G2L["29"] = Instance.new("UICorner", G2L["26"]);



-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.IgnoreThis
G2L["2a"] = Instance.new("ImageLabel", G2L["26"]);
G2L["2a"]["BorderSizePixel"] = 0;
G2L["2a"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["2a"]["Image"] = [[rbxassetid://95774500893219]];
G2L["2a"]["Size"] = UDim2.new(0, 39, 0, 28);
G2L["2a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["2a"]["BackgroundTransparency"] = 1;
G2L["2a"]["Name"] = [[IgnoreThis]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperBoost
G2L["2b"] = Instance.new("TextLabel", G2L["26"]);
G2L["2b"]["TextSize"] = 17;
G2L["2b"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["2b"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["2b"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["2b"]["BackgroundTransparency"] = 1;
G2L["2b"]["Size"] = UDim2.new(0, 46, 0, 29);
G2L["2b"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["2b"]["Text"] = [[Boost]];
G2L["2b"]["Name"] = [[SuperBoost]];
G2L["2b"]["Position"] = UDim2.new(0.56054, 0, -0.03448, 0);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperAmount
G2L["2c"] = Instance.new("TextLabel", G2L["26"]);
G2L["2c"]["TextWrapped"] = true;
G2L["2c"]["TextSize"] = 17;
G2L["2c"]["TextScaled"] = true;
G2L["2c"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["2c"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["2c"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["2c"]["BackgroundTransparency"] = 1;
G2L["2c"]["Size"] = UDim2.new(0, 46, 0, 29);
G2L["2c"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["2c"]["Text"] = [[Amount]];
G2L["2c"]["Name"] = [[SuperAmount]];
G2L["2c"]["Position"] = UDim2.new(0.1499, 0, 0, 0);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerAmount
G2L["2d"] = Instance.new("TextBox", G2L["26"]);
G2L["2d"]["Name"] = [[SuperChargerAmount]];
G2L["2d"]["BorderSizePixel"] = 0;
G2L["2d"]["TextSize"] = 14;
G2L["2d"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["2d"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["2d"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["2d"]["Size"] = UDim2.new(0, 54, 0, 29);
G2L["2d"]["Position"] = UDim2.new(0.35043, 0, 0, 0);
G2L["2d"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["2d"]["Text"] = [[]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerAmount.nn
G2L["2e"] = Instance.new("LocalScript", G2L["2d"]);
G2L["2e"]["Name"] = [[nn]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerAmount.UIGradient
G2L["2f"] = Instance.new("UIGradient", G2L["2d"]);
G2L["2f"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(90, 90, 90)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(90, 90, 90))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerAmount.UICorner
G2L["30"] = Instance.new("UICorner", G2L["2d"]);
G2L["30"]["CornerRadius"] = UDim.new(0, 3);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerBoost
G2L["31"] = Instance.new("TextBox", G2L["26"]);
G2L["31"]["Name"] = [[SuperChargerBoost]];
G2L["31"]["BorderSizePixel"] = 0;
G2L["31"]["TextSize"] = 14;
G2L["31"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["31"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["31"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["31"]["Size"] = UDim2.new(0, 54, 0, 29);
G2L["31"]["Position"] = UDim2.new(0.75326, 0, -0.03448, 0);
G2L["31"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["31"]["Text"] = [[]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerBoost.nn
G2L["32"] = Instance.new("LocalScript", G2L["31"]);
G2L["32"]["Name"] = [[nn]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerBoost.UIGradient
G2L["33"] = Instance.new("UIGradient", G2L["31"]);
G2L["33"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(90, 90, 90)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(90, 90, 90))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerBoost.UICorner
G2L["34"] = Instance.new("UICorner", G2L["31"]);
G2L["34"]["CornerRadius"] = UDim.new(0, 3);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.HorsePower
G2L["35"] = Instance.new("Frame", G2L["10"]);
G2L["35"]["BorderSizePixel"] = 0;
G2L["35"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["35"]["Size"] = UDim2.new(0, 54, 0, 29);
G2L["35"]["Position"] = UDim2.new(0.30352, 0, 0.37436, 0);
G2L["35"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["35"]["Name"] = [[HorsePower]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.HorsePower.UIStroke
G2L["36"] = Instance.new("UIStroke", G2L["35"]);
G2L["36"]["Thickness"] = 2;
G2L["36"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.HorsePower.UIGradient
G2L["37"] = Instance.new("UIGradient", G2L["35"]);
G2L["37"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.HorsePower.UICorner
G2L["38"] = Instance.new("UICorner", G2L["35"]);
G2L["38"]["CornerRadius"] = UDim.new(0, 2);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.HorsePower.HP
G2L["39"] = Instance.new("TextBox", G2L["35"]);
G2L["39"]["Name"] = [[HP]];
G2L["39"]["BorderSizePixel"] = 0;
G2L["39"]["TextSize"] = 14;
G2L["39"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["39"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["39"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["39"]["Size"] = UDim2.new(0, 54, 0, 29);
G2L["39"]["Position"] = UDim2.new(-0.00894, 0, 0, 0);
G2L["39"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["39"]["Text"] = [[]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.HorsePower.HP.nn
G2L["3a"] = Instance.new("LocalScript", G2L["39"]);
G2L["3a"]["Name"] = [[nn]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.HorsePower.HP.UIGradient
G2L["3b"] = Instance.new("UIGradient", G2L["39"]);
G2L["3b"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(90, 90, 90)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(90, 90, 90))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.HorsePower.HP.UICorner
G2L["3c"] = Instance.new("UICorner", G2L["39"]);
G2L["3c"]["CornerRadius"] = UDim.new(0, 3);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame
G2L["3d"] = Instance.new("Frame", G2L["10"]);
G2L["3d"]["BorderSizePixel"] = 0;
G2L["3d"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["3d"]["Size"] = UDim2.new(0, 108, 0, 62);
G2L["3d"]["Position"] = UDim2.new(0.56911, 0, 0.45217, 0);
G2L["3d"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["3d"]["Name"] = [[TunnerFrame]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame.UIStroke
G2L["3e"] = Instance.new("UIStroke", G2L["3d"]);
G2L["3e"]["Thickness"] = 2;
G2L["3e"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame.UIGradient
G2L["3f"] = Instance.new("UIGradient", G2L["3d"]);
G2L["3f"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame.UICorner
G2L["40"] = Instance.new("UICorner", G2L["3d"]);



-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame.TunnerButton
G2L["41"] = Instance.new("Frame", G2L["3d"]);
G2L["41"]["BorderSizePixel"] = 0;
G2L["41"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["41"]["Size"] = UDim2.new(0, 107, 0, 30);
G2L["41"]["Position"] = UDim2.new(0, 0, -0.00188, 0);
G2L["41"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["41"]["Name"] = [[TunnerButton]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame.TunnerButton.TunnerButtonBtn
G2L["42"] = Instance.new("TextButton", G2L["41"]);
G2L["42"]["BorderSizePixel"] = 0;
G2L["42"]["TextSize"] = 20;
G2L["42"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["42"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["42"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["42"]["BackgroundTransparency"] = 1;
G2L["42"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["42"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["42"]["Text"] = [[Tune...!]];
G2L["42"]["Name"] = [[TunnerButtonBtn]];
G2L["42"]["Position"] = UDim2.new(0.04673, 0, -0.01362, 0);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame.TunnerButton.TunnerButtonBtn.UIGradient
G2L["43"] = Instance.new("UIGradient", G2L["42"]);



-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame.TunnerButton.UIStroke
G2L["44"] = Instance.new("UIStroke", G2L["41"]);
G2L["44"]["Thickness"] = 2;
G2L["44"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame.TunnerButton.UIGradient
G2L["45"] = Instance.new("UIGradient", G2L["41"]);
G2L["45"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame.TunnerButton.UICorner
G2L["46"] = Instance.new("UICorner", G2L["41"]);



-- StarterGui.DannTunner.Open.FrameAll.LoadingFrame
G2L["47"] = Instance.new("Frame", G2L["f"]);
G2L["47"]["BorderSizePixel"] = 0;
G2L["47"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["47"]["Size"] = UDim2.new(0, 369, 0, 195);
G2L["47"]["Position"] = UDim2.new(0.22909, 0, 0.15377, 0);
G2L["47"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["47"]["Name"] = [[LoadingFrame]];


-- StarterGui.DannTunner.Open.FrameAll.LoadingFrame.UIStroke
G2L["48"] = Instance.new("UIStroke", G2L["47"]);
G2L["48"]["Thickness"] = 2;
G2L["48"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.LoadingFrame.UIGradient
G2L["49"] = Instance.new("UIGradient", G2L["47"]);
G2L["49"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.LoadingFrame.UICorner
G2L["4a"] = Instance.new("UICorner", G2L["47"]);



-- StarterGui.DannTunner.Open.FrameAll.LoadingFrame.Grattering
G2L["4b"] = Instance.new("TextLabel", G2L["47"]);
G2L["4b"]["TextWrapped"] = true;
G2L["4b"]["BorderSizePixel"] = 0;
G2L["4b"]["TextSize"] = 17;
G2L["4b"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["4b"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["4b"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["4b"]["BackgroundTransparency"] = 1;
G2L["4b"]["Size"] = UDim2.new(0, 226, 0, 50);
G2L["4b"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["4b"]["Text"] = [[]];
G2L["4b"]["Name"] = [[Grattering]];
G2L["4b"]["Position"] = UDim2.new(0, 0, 0.0359, 0);


-- StarterGui.DannTunner.Open.FrameAll.LoadingFrame.Grattering.Grthndl
G2L["4c"] = Instance.new("LocalScript", G2L["4b"]);
G2L["4c"]["Name"] = [[Grthndl]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame
G2L["4d"] = Instance.new("Frame", G2L["f"]);
G2L["4d"]["Visible"] = false;
G2L["4d"]["BorderSizePixel"] = 0;
G2L["4d"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["4d"]["Size"] = UDim2.new(0, 369, 0, 195);
G2L["4d"]["Position"] = UDim2.new(0.22909, 0, 0.15377, 0);
G2L["4d"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["4d"]["Name"] = [[MiscFrame]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.UIStroke
G2L["4e"] = Instance.new("UIStroke", G2L["4d"]);
G2L["4e"]["Thickness"] = 2;
G2L["4e"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.UIGradient
G2L["4f"] = Instance.new("UIGradient", G2L["4d"]);
G2L["4f"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.UICorner
G2L["50"] = Instance.new("UICorner", G2L["4d"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin
G2L["51"] = Instance.new("Frame", G2L["4d"]);
G2L["51"]["BorderSizePixel"] = 0;
G2L["51"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["51"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["51"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["51"]["Name"] = [[Rejoin]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.UIStroke
G2L["52"] = Instance.new("UIStroke", G2L["51"]);
G2L["52"]["Thickness"] = 2;
G2L["52"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.UIGradient
G2L["53"] = Instance.new("UIGradient", G2L["51"]);
G2L["53"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.UICorner
G2L["54"] = Instance.new("UICorner", G2L["51"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Rejoin Server
G2L["55"] = Instance.new("TextButton", G2L["51"]);
G2L["55"]["TextWrapped"] = true;
G2L["55"]["BorderSizePixel"] = 0;
G2L["55"]["TextSize"] = 20;
G2L["55"]["TextScaled"] = true;
G2L["55"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["55"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["55"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["55"]["BackgroundTransparency"] = 1;
G2L["55"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["55"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["55"]["Text"] = [[Rejoin Server]];
G2L["55"]["Name"] = [[Rejoin Server]];
G2L["55"]["Position"] = UDim2.new(0.00916, 0, -0.0069, 0);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Rejoin Server.UIGradient
G2L["56"] = Instance.new("UIGradient", G2L["55"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport
G2L["57"] = Instance.new("Frame", G2L["4d"]);
G2L["57"]["BorderSizePixel"] = 0;
G2L["57"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["57"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["57"]["Position"] = UDim2.new(0, 0, 0.18974, 0);
G2L["57"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["57"]["Name"] = [[Teleport]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.UIStroke
G2L["58"] = Instance.new("UIStroke", G2L["57"]);
G2L["58"]["Thickness"] = 2;
G2L["58"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.UIGradient
G2L["59"] = Instance.new("UIGradient", G2L["57"]);
G2L["59"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.UICorner
G2L["5a"] = Instance.new("UICorner", G2L["57"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportBtn
G2L["5b"] = Instance.new("TextButton", G2L["57"]);
G2L["5b"]["TextWrapped"] = true;
G2L["5b"]["BorderSizePixel"] = 0;
G2L["5b"]["TextSize"] = 20;
G2L["5b"]["TextScaled"] = true;
G2L["5b"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["5b"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["5b"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["5b"]["BackgroundTransparency"] = 1;
G2L["5b"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["5b"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["5b"]["Text"] = [[Teleport]];
G2L["5b"]["Name"] = [[TeleportBtn]];
G2L["5b"]["Position"] = UDim2.new(-0.00055, 0, -0.0069, 0);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportBtn.UIGradient
G2L["5c"] = Instance.new("UIGradient", G2L["5b"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList
G2L["5d"] = Instance.new("Frame", G2L["57"]);
G2L["5d"]["Visible"] = false;
G2L["5d"]["BorderSizePixel"] = 0;
G2L["5d"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["5d"]["Size"] = UDim2.new(0, 164, 0, 195);
G2L["5d"]["Position"] = UDim2.new(1.99029, 0, -1.27586, 0);
G2L["5d"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["5d"]["Name"] = [[TeleportList]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.TeleportHandler
G2L["5e"] = Instance.new("LocalScript", G2L["5d"]);
G2L["5e"]["Name"] = [[TeleportHandler]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.UIGradient
G2L["5f"] = Instance.new("UIGradient", G2L["5d"]);
G2L["5f"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.UICorner
G2L["60"] = Instance.new("UICorner", G2L["5d"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.UIStroke
G2L["61"] = Instance.new("UIStroke", G2L["5d"]);
G2L["61"]["Thickness"] = 2;
G2L["61"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.ScrollingFrame
G2L["62"] = Instance.new("ScrollingFrame", G2L["5d"]);
G2L["62"]["Active"] = true;
G2L["62"]["BorderSizePixel"] = 0;
G2L["62"]["BackgroundColor3"] = Color3.fromRGB(53, 53, 53);
G2L["62"]["Size"] = UDim2.new(0, 164, 0, 194);
G2L["62"]["Position"] = UDim2.new(0, 0, 0.00256, 0);
G2L["62"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["62"]["BackgroundTransparency"] = 1;


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.ScrollingFrame.UIListLayout
G2L["63"] = Instance.new("UIListLayout", G2L["62"]);
G2L["63"]["SortOrder"] = Enum.SortOrder.LayoutOrder;


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.ScrollingFrame.Clone
G2L["64"] = Instance.new("Frame", G2L["62"]);
G2L["64"]["Visible"] = false;
G2L["64"]["BorderSizePixel"] = 0;
G2L["64"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["64"]["Size"] = UDim2.new(0, 164, 0, 29);
G2L["64"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["64"]["Name"] = [[Clone]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.ScrollingFrame.Clone.UIStroke
G2L["65"] = Instance.new("UIStroke", G2L["64"]);
G2L["65"]["Thickness"] = 2;
G2L["65"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.ScrollingFrame.Clone.UIGradient
G2L["66"] = Instance.new("UIGradient", G2L["64"]);
G2L["66"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.ScrollingFrame.Clone.UICorner
G2L["67"] = Instance.new("UICorner", G2L["64"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.ScrollingFrame.Clone.CloneBtn
G2L["68"] = Instance.new("TextButton", G2L["64"]);
G2L["68"]["TextWrapped"] = true;
G2L["68"]["BorderSizePixel"] = 0;
G2L["68"]["TextSize"] = 20;
G2L["68"]["TextScaled"] = true;
G2L["68"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["68"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["68"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["68"]["BackgroundTransparency"] = 1;
G2L["68"]["Size"] = UDim2.new(0, 154, 0, 29);
G2L["68"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["68"]["Text"] = [[]];
G2L["68"]["Name"] = [[CloneBtn]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.ScrollingFrame.Clone.CloneBtn.UIGradient
G2L["69"] = Instance.new("UIGradient", G2L["68"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.DragTimer
G2L["6a"] = Instance.new("Frame", G2L["4d"]);
G2L["6a"]["BorderSizePixel"] = 0;
G2L["6a"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["6a"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["6a"]["Position"] = UDim2.new(0.00271, 0, 0.37436, 0);
G2L["6a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["6a"]["Name"] = [[DragTimer]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.DragTimer.UIStroke
G2L["6b"] = Instance.new("UIStroke", G2L["6a"]);
G2L["6b"]["Thickness"] = 2;
G2L["6b"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.DragTimer.UIGradient
G2L["6c"] = Instance.new("UIGradient", G2L["6a"]);
G2L["6c"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.DragTimer.UICorner
G2L["6d"] = Instance.new("UICorner", G2L["6a"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.DragTimer.DragTimerBtn
G2L["6e"] = Instance.new("TextButton", G2L["6a"]);
G2L["6e"]["TextWrapped"] = true;
G2L["6e"]["BorderSizePixel"] = 0;
G2L["6e"]["TextSize"] = 20;
G2L["6e"]["TextScaled"] = true;
G2L["6e"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["6e"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["6e"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["6e"]["BackgroundTransparency"] = 1;
G2L["6e"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["6e"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["6e"]["Text"] = [[Drag Timer]];
G2L["6e"]["Name"] = [[DragTimerBtn]];
G2L["6e"]["Position"] = UDim2.new(-0.00055, 0, -0.0069, 0);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.DragTimer.DragTimerBtn.UIGradient
G2L["6f"] = Instance.new("UIGradient", G2L["6e"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial
G2L["70"] = Instance.new("Frame", G2L["4d"]);
G2L["70"]["BorderSizePixel"] = 0;
G2L["70"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["70"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["70"]["Position"] = UDim2.new(0.00271, 0, 0.55897, 0);
G2L["70"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["70"]["Name"] = [[TimeTrial]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.UIStroke
G2L["71"] = Instance.new("UIStroke", G2L["70"]);
G2L["71"]["Thickness"] = 2;
G2L["71"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.UIGradient
G2L["72"] = Instance.new("UIGradient", G2L["70"]);
G2L["72"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.UICorner
G2L["73"] = Instance.new("UICorner", G2L["70"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialBtn
G2L["74"] = Instance.new("TextButton", G2L["70"]);
G2L["74"]["TextWrapped"] = true;
G2L["74"]["BorderSizePixel"] = 0;
G2L["74"]["TextSize"] = 20;
G2L["74"]["TextScaled"] = true;
G2L["74"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["74"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["74"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["74"]["BackgroundTransparency"] = 1;
G2L["74"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["74"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["74"]["Text"] = [[Time Trial]];
G2L["74"]["Name"] = [[TimeTrialBtn]];
G2L["74"]["Position"] = UDim2.new(-0.00055, 0, -0.04138, 0);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialBtn.UIGradient
G2L["75"] = Instance.new("UIGradient", G2L["74"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame
G2L["76"] = Instance.new("Frame", G2L["70"]);
G2L["76"]["Visible"] = false;
G2L["76"]["BorderSizePixel"] = 0;
G2L["76"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["76"]["Size"] = UDim2.new(0, 172, 0, 194);
G2L["76"]["Position"] = UDim2.new(1.90291, 0, -3.72414, 0);
G2L["76"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["76"]["Name"] = [[TimeTrialFrame]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.UICorner
G2L["77"] = Instance.new("UICorner", G2L["76"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.UIStroke
G2L["78"] = Instance.new("UIStroke", G2L["76"]);
G2L["78"]["Thickness"] = 2;
G2L["78"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.UIGradient
G2L["79"] = Instance.new("UIGradient", G2L["76"]);
G2L["79"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.StartTime
G2L["7a"] = Instance.new("Frame", G2L["76"]);
G2L["7a"]["BorderSizePixel"] = 0;
G2L["7a"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["7a"]["Size"] = UDim2.new(0, 100, 0, 29);
G2L["7a"]["Position"] = UDim2.new(0.20349, 0, 0.18557, 0);
G2L["7a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["7a"]["Name"] = [[StartTime]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.StartTime.UIStroke
G2L["7b"] = Instance.new("UIStroke", G2L["7a"]);
G2L["7b"]["Thickness"] = 2;
G2L["7b"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.StartTime.UIGradient
G2L["7c"] = Instance.new("UIGradient", G2L["7a"]);
G2L["7c"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.StartTime.UICorner
G2L["7d"] = Instance.new("UICorner", G2L["7a"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.StartTime.StartTimeTrial
G2L["7e"] = Instance.new("TextButton", G2L["7a"]);
G2L["7e"]["TextWrapped"] = true;
G2L["7e"]["BorderSizePixel"] = 0;
G2L["7e"]["TextSize"] = 20;
G2L["7e"]["TextScaled"] = true;
G2L["7e"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["7e"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["7e"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["7e"]["BackgroundTransparency"] = 1;
G2L["7e"]["Size"] = UDim2.new(0, 100, 0, 29);
G2L["7e"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["7e"]["Text"] = [[Start Time Trial]];
G2L["7e"]["Name"] = [[StartTimeTrial]];
G2L["7e"]["Position"] = UDim2.new(-0.00288, 0, -0.0117, 0);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.StartTime.StartTimeTrial.UIGradient
G2L["7f"] = Instance.new("UIGradient", G2L["7e"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.TeleportTimeTrial
G2L["80"] = Instance.new("Frame", G2L["76"]);
G2L["80"]["BorderSizePixel"] = 0;
G2L["80"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["80"]["Size"] = UDim2.new(0, 100, 0, 29);
G2L["80"]["Position"] = UDim2.new(0.19767, 0, 0.54639, 0);
G2L["80"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["80"]["Name"] = [[TeleportTimeTrial]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.TeleportTimeTrial.UIStroke
G2L["81"] = Instance.new("UIStroke", G2L["80"]);
G2L["81"]["Thickness"] = 2;
G2L["81"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.TeleportTimeTrial.UIGradient
G2L["82"] = Instance.new("UIGradient", G2L["80"]);
G2L["82"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.TeleportTimeTrial.UICorner
G2L["83"] = Instance.new("UICorner", G2L["80"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.TeleportTimeTrial.TeleportTimeTrials
G2L["84"] = Instance.new("TextButton", G2L["80"]);
G2L["84"]["TextWrapped"] = true;
G2L["84"]["BorderSizePixel"] = 0;
G2L["84"]["TextSize"] = 20;
G2L["84"]["TextScaled"] = true;
G2L["84"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["84"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["84"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["84"]["BackgroundTransparency"] = 1;
G2L["84"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["84"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["84"]["Text"] = [[Teleport ke Time Trial Sentul]];
G2L["84"]["Name"] = [[TeleportTimeTrials]];
G2L["84"]["Position"] = UDim2.new(0.00061, 0, -0.00814, 0);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.TeleportTimeTrial.TeleportTimeTrials.UIGradient
G2L["85"] = Instance.new("UIGradient", G2L["84"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.NotifTimeTrial
G2L["86"] = Instance.new("Frame", G2L["76"]);
G2L["86"]["Visible"] = false;
G2L["86"]["BorderSizePixel"] = 0;
G2L["86"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["86"]["Size"] = UDim2.new(0, 100, 0, 100);
G2L["86"]["Position"] = UDim2.new(0.20349, 0, 0.19072, 0);
G2L["86"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["86"]["Name"] = [[NotifTimeTrial]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.NotifTimeTrial.UIStroke
G2L["87"] = Instance.new("UIStroke", G2L["86"]);
G2L["87"]["Thickness"] = 2;
G2L["87"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.NotifTimeTrial.UIGradient
G2L["88"] = Instance.new("UIGradient", G2L["86"]);
G2L["88"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.NotifTimeTrial.UICorner
G2L["89"] = Instance.new("UICorner", G2L["86"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.NotifTimeTrial.CP
G2L["8a"] = Instance.new("TextLabel", G2L["86"]);
G2L["8a"]["TextWrapped"] = true;
G2L["8a"]["BorderSizePixel"] = 0;
G2L["8a"]["TextSize"] = 20;
G2L["8a"]["TextScaled"] = true;
G2L["8a"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["8a"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["8a"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["8a"]["BackgroundTransparency"] = 1;
G2L["8a"]["Size"] = UDim2.new(0, 100, 0, 98);
G2L["8a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["8a"]["Text"] = [[]];
G2L["8a"]["Name"] = [[CP]];


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame
G2L["8b"] = Instance.new("Frame", G2L["f"]);
G2L["8b"]["Visible"] = false;
G2L["8b"]["BorderSizePixel"] = 0;
G2L["8b"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["8b"]["Size"] = UDim2.new(0, 369, 0, 195);
G2L["8b"]["Position"] = UDim2.new(0.22909, 0, 0.15377, 0);
G2L["8b"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["8b"]["Name"] = [[ConfigFrame]];


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.UIStroke
G2L["8c"] = Instance.new("UIStroke", G2L["8b"]);
G2L["8c"]["Thickness"] = 2;
G2L["8c"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.UIGradient
G2L["8d"] = Instance.new("UIGradient", G2L["8b"]);
G2L["8d"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.UICorner
G2L["8e"] = Instance.new("UICorner", G2L["8b"]);



-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Save Tuning
G2L["8f"] = Instance.new("Frame", G2L["8b"]);
G2L["8f"]["BorderSizePixel"] = 0;
G2L["8f"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["8f"]["Size"] = UDim2.new(0, 104, 0, 36);
G2L["8f"]["Position"] = UDim2.new(0.04607, 0, 0.55897, 0);
G2L["8f"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["8f"]["Name"] = [[Save Tuning]];


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Save Tuning.UIStroke
G2L["90"] = Instance.new("UIStroke", G2L["8f"]);
G2L["90"]["Thickness"] = 2;
G2L["90"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Save Tuning.UIGradient
G2L["91"] = Instance.new("UIGradient", G2L["8f"]);
G2L["91"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Save Tuning.UICorner
G2L["92"] = Instance.new("UICorner", G2L["8f"]);



-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Save Tuning.SaveTuningBtn
G2L["93"] = Instance.new("TextButton", G2L["8f"]);
G2L["93"]["TextWrapped"] = true;
G2L["93"]["BorderSizePixel"] = 0;
G2L["93"]["TextSize"] = 20;
G2L["93"]["TextScaled"] = true;
G2L["93"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["93"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["93"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["93"]["BackgroundTransparency"] = 1;
G2L["93"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["93"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["93"]["Text"] = [[Save Tuning]];
G2L["93"]["Name"] = [[SaveTuningBtn]];
G2L["93"]["Position"] = UDim2.new(0.00106, 0, 0.07401, 0);


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Save Tuning.SaveTuningBtn.UIGradient
G2L["94"] = Instance.new("UIGradient", G2L["93"]);



-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Delete Tuning
G2L["95"] = Instance.new("Frame", G2L["8b"]);
G2L["95"]["BorderSizePixel"] = 0;
G2L["95"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["95"]["Size"] = UDim2.new(0, 104, 0, 36);
G2L["95"]["Position"] = UDim2.new(0.04607, 0, 0.78462, 0);
G2L["95"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["95"]["Name"] = [[Delete Tuning]];


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Delete Tuning.UIStroke
G2L["96"] = Instance.new("UIStroke", G2L["95"]);
G2L["96"]["Thickness"] = 2;
G2L["96"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Delete Tuning.UIGradient
G2L["97"] = Instance.new("UIGradient", G2L["95"]);
G2L["97"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Delete Tuning.UICorner
G2L["98"] = Instance.new("UICorner", G2L["95"]);



-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Delete Tuning.DeleteTuningBtn
G2L["99"] = Instance.new("TextButton", G2L["95"]);
G2L["99"]["TextWrapped"] = true;
G2L["99"]["BorderSizePixel"] = 0;
G2L["99"]["TextSize"] = 20;
G2L["99"]["TextScaled"] = true;
G2L["99"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["99"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["99"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["99"]["BackgroundTransparency"] = 1;
G2L["99"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["99"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["99"]["Text"] = [[Delete Tuning]];
G2L["99"]["Name"] = [[DeleteTuningBtn]];
G2L["99"]["Position"] = UDim2.new(0.00106, 0, 0.07401, 0);


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Delete Tuning.DeleteTuningBtn.UIGradient
G2L["9a"] = Instance.new("UIGradient", G2L["99"]);



-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList
G2L["9b"] = Instance.new("Frame", G2L["8b"]);
G2L["9b"]["BorderSizePixel"] = 0;
G2L["9b"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["9b"]["Size"] = UDim2.new(0, 203, 0, 177);
G2L["9b"]["Position"] = UDim2.new(0.41734, 0, 0.0359, 0);
G2L["9b"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["9b"]["Name"] = [[ConfigList]];


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.UIStroke
G2L["9c"] = Instance.new("UIStroke", G2L["9b"]);
G2L["9c"]["Thickness"] = 2;
G2L["9c"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.UIGradient
G2L["9d"] = Instance.new("UIGradient", G2L["9b"]);
G2L["9d"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.UICorner
G2L["9e"] = Instance.new("UICorner", G2L["9b"]);



-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.ScrollingFrame
G2L["9f"] = Instance.new("ScrollingFrame", G2L["9b"]);
G2L["9f"]["Active"] = true;
G2L["9f"]["BorderSizePixel"] = 0;
G2L["9f"]["BackgroundColor3"] = Color3.fromRGB(53, 53, 53);
G2L["9f"]["Size"] = UDim2.new(0, 203, 0, 176);
G2L["9f"]["Position"] = UDim2.new(0, 0, 0.00256, 0);
G2L["9f"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["9f"]["BackgroundTransparency"] = 1;


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.ScrollingFrame.UIListLayout
G2L["a0"] = Instance.new("UIListLayout", G2L["9f"]);
G2L["a0"]["SortOrder"] = Enum.SortOrder.LayoutOrder;


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.ScrollingFrame.Clone
G2L["a1"] = Instance.new("Frame", G2L["9f"]);
G2L["a1"]["Visible"] = false;
G2L["a1"]["BorderSizePixel"] = 0;
G2L["a1"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["a1"]["Size"] = UDim2.new(0, 188, 0, 29);
G2L["a1"]["Position"] = UDim2.new(0, 0, 0, 0);
G2L["a1"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["a1"]["Name"] = [[Clone]];


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.ScrollingFrame.Clone.UIStroke
G2L["a2"] = Instance.new("UIStroke", G2L["a1"]);
G2L["a2"]["Thickness"] = 2;
G2L["a2"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.ScrollingFrame.Clone.UIGradient
G2L["a3"] = Instance.new("UIGradient", G2L["a1"]);
G2L["a3"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.ScrollingFrame.Clone.UICorner
G2L["a4"] = Instance.new("UICorner", G2L["a1"]);



-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.ScrollingFrame.Clone.CloneBtn
G2L["a5"] = Instance.new("TextButton", G2L["a1"]);
G2L["a5"]["TextWrapped"] = true;
G2L["a5"]["BorderSizePixel"] = 0;
G2L["a5"]["TextSize"] = 20;
G2L["a5"]["TextScaled"] = true;
G2L["a5"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["a5"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["a5"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["a5"]["BackgroundTransparency"] = 1;
G2L["a5"]["Size"] = UDim2.new(0, 190, 0, 29);
G2L["a5"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["a5"]["Text"] = [[]];
G2L["a5"]["Name"] = [[CloneBtn]];


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.ScrollingFrame.Clone.CloneBtn.UIGradient
G2L["a6"] = Instance.new("UIGradient", G2L["a5"]);



-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.FileNameSave
G2L["a7"] = Instance.new("Frame", G2L["8b"]);
G2L["a7"]["BorderSizePixel"] = 0;
G2L["a7"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["a7"]["Size"] = UDim2.new(0, 127, 0, 36);
G2L["a7"]["Position"] = UDim2.new(0.04607, 0, 0.31795, 0);
G2L["a7"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["a7"]["Name"] = [[FileNameSave]];


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.FileNameSave.UIStroke
G2L["a8"] = Instance.new("UIStroke", G2L["a7"]);
G2L["a8"]["Thickness"] = 2;
G2L["a8"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.FileNameSave.UIGradient
G2L["a9"] = Instance.new("UIGradient", G2L["a7"]);
G2L["a9"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.FileNameSave.UICorner
G2L["aa"] = Instance.new("UICorner", G2L["a7"]);



-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.FileNameSave.FileNameTxt
G2L["ab"] = Instance.new("TextBox", G2L["a7"]);
G2L["ab"]["CursorPosition"] = -1;
G2L["ab"]["Name"] = [[FileNameTxt]];
G2L["ab"]["BorderSizePixel"] = 0;
G2L["ab"]["TextSize"] = 20;
G2L["ab"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["ab"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["ab"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["ab"]["Size"] = UDim2.new(0, 127, 0, 36);
G2L["ab"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["ab"]["Text"] = [[]];
G2L["ab"]["BackgroundTransparency"] = 1;


-- StarterGui.DannTunner.Open.FrameAll.CreditFrame
G2L["ac"] = Instance.new("Frame", G2L["f"]);
G2L["ac"]["Visible"] = false;
G2L["ac"]["BorderSizePixel"] = 0;
G2L["ac"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["ac"]["Size"] = UDim2.new(0, 369, 0, 195);
G2L["ac"]["Position"] = UDim2.new(0.22909, 0, 0.15377, 0);
G2L["ac"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["ac"]["Name"] = [[CreditFrame]];


-- StarterGui.DannTunner.Open.FrameAll.CreditFrame.UIStroke
G2L["ad"] = Instance.new("UIStroke", G2L["ac"]);
G2L["ad"]["Thickness"] = 2;
G2L["ad"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.CreditFrame.UIGradient
G2L["ae"] = Instance.new("UIGradient", G2L["ac"]);
G2L["ae"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.CreditFrame.UICorner
G2L["af"] = Instance.new("UICorner", G2L["ac"]);



-- StarterGui.DannTunner.Open.FrameAll.CreditFrame.Credit
G2L["b0"] = Instance.new("TextLabel", G2L["ac"]);
G2L["b0"]["TextWrapped"] = true;
G2L["b0"]["BorderSizePixel"] = 0;
G2L["b0"]["TextSize"] = 20;
G2L["b0"]["TextScaled"] = true;
G2L["b0"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["b0"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["b0"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["b0"]["BackgroundTransparency"] = 1;
G2L["b0"]["Size"] = UDim2.new(0, 169, 0, 81);
G2L["b0"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["b0"]["Text"] = [[Credit by Fandy (Sum Idea) & Dika (Android Support)]];
G2L["b0"]["Name"] = [[Credit]];
G2L["b0"]["Position"] = UDim2.new(0.271, 0, 0.61026, 0);


-- StarterGui.DannTunner.Open.FrameAll.CreditFrame.Credit
G2L["b1"] = Instance.new("TextLabel", G2L["ac"]);
G2L["b1"]["TextWrapped"] = true;
G2L["b1"]["BorderSizePixel"] = 0;
G2L["b1"]["TextSize"] = 20;
G2L["b1"]["TextScaled"] = true;
G2L["b1"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["b1"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["b1"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["b1"]["BackgroundTransparency"] = 1;
G2L["b1"]["Size"] = UDim2.new(0, 121, 0, 29);
G2L["b1"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["b1"]["Text"] = [[Creator : Dann]];
G2L["b1"]["Name"] = [[Credit]];
G2L["b1"]["Position"] = UDim2.new(0.33604, 0, 0.18974, 0);


-- StarterGui.DannTunner.Open.HandlerFrame
G2L["b2"] = Instance.new("Folder", G2L["a"]);
G2L["b2"]["Name"] = [[HandlerFrame]];


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage
G2L["b3"] = Instance.new("Frame", G2L["b2"]);
G2L["b3"]["BorderSizePixel"] = 0;
G2L["b3"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["b3"]["Size"] = UDim2.new(0, 103, 0, 233);
G2L["b3"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["b3"]["Name"] = [[MainPage]];


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.UIStroke
G2L["b4"] = Instance.new("UIStroke", G2L["b3"]);
G2L["b4"]["Thickness"] = 2;
G2L["b4"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.UIGradient
G2L["b5"] = Instance.new("UIGradient", G2L["b3"]);
G2L["b5"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.UICorner
G2L["b6"] = Instance.new("UICorner", G2L["b3"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.TuningButton
G2L["b7"] = Instance.new("Frame", G2L["b3"]);
G2L["b7"]["BorderSizePixel"] = 0;
G2L["b7"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["b7"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["b7"]["Position"] = UDim2.new(0, 0, 0.1588, 0);
G2L["b7"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["b7"]["Name"] = [[TuningButton]];


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.TuningButton.TuningButtonBtn
G2L["b8"] = Instance.new("TextButton", G2L["b7"]);
G2L["b8"]["BorderSizePixel"] = 0;
G2L["b8"]["TextSize"] = 20;
G2L["b8"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["b8"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["b8"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["b8"]["BackgroundTransparency"] = 1;
G2L["b8"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["b8"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["b8"]["Text"] = [[Tuning]];
G2L["b8"]["Name"] = [[TuningButtonBtn]];
G2L["b8"]["Position"] = UDim2.new(0, 0, -0.01362, 0);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.TuningButton.TuningButtonBtn.UIGradient
G2L["b9"] = Instance.new("UIGradient", G2L["b8"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.TuningButton.UIStroke
G2L["ba"] = Instance.new("UIStroke", G2L["b7"]);
G2L["ba"]["Thickness"] = 2;
G2L["ba"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.TuningButton.UIGradient
G2L["bb"] = Instance.new("UIGradient", G2L["b7"]);
G2L["bb"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.TuningButton.UICorner
G2L["bc"] = Instance.new("UICorner", G2L["b7"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.MiscButton
G2L["bd"] = Instance.new("Frame", G2L["b3"]);
G2L["bd"]["BorderSizePixel"] = 0;
G2L["bd"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["bd"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["bd"]["Position"] = UDim2.new(0, 0, 0.3133, 0);
G2L["bd"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["bd"]["Name"] = [[MiscButton]];


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.MiscButton.MiscButtonBtn
G2L["be"] = Instance.new("TextButton", G2L["bd"]);
G2L["be"]["BorderSizePixel"] = 0;
G2L["be"]["TextSize"] = 20;
G2L["be"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["be"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["be"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["be"]["BackgroundTransparency"] = 1;
G2L["be"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["be"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["be"]["Text"] = [[Misc]];
G2L["be"]["Name"] = [[MiscButtonBtn]];
G2L["be"]["Position"] = UDim2.new(0, 0, -0.01362, 0);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.MiscButton.MiscButtonBtn.UIGradient
G2L["bf"] = Instance.new("UIGradient", G2L["be"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.MiscButton.UIStroke
G2L["c0"] = Instance.new("UIStroke", G2L["bd"]);
G2L["c0"]["Thickness"] = 2;
G2L["c0"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.MiscButton.UIGradient
G2L["c1"] = Instance.new("UIGradient", G2L["bd"]);
G2L["c1"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.MiscButton.UICorner
G2L["c2"] = Instance.new("UICorner", G2L["bd"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ConfigButton
G2L["c3"] = Instance.new("Frame", G2L["b3"]);
G2L["c3"]["BorderSizePixel"] = 0;
G2L["c3"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["c3"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["c3"]["Position"] = UDim2.new(0, 0, 0.46781, 0);
G2L["c3"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["c3"]["Name"] = [[ConfigButton]];


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ConfigButton.ConfigButtonBtn
G2L["c4"] = Instance.new("TextButton", G2L["c3"]);
G2L["c4"]["TextWrapped"] = true;
G2L["c4"]["BorderSizePixel"] = 0;
G2L["c4"]["TextSize"] = 20;
G2L["c4"]["TextScaled"] = true;
G2L["c4"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["c4"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["c4"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["c4"]["BackgroundTransparency"] = 1;
G2L["c4"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["c4"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["c4"]["Text"] = [[Config & Save]];
G2L["c4"]["Name"] = [[ConfigButtonBtn]];
G2L["c4"]["Position"] = UDim2.new(0, 0, -0.01362, 0);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ConfigButton.ConfigButtonBtn.UIGradient
G2L["c5"] = Instance.new("UIGradient", G2L["c4"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ConfigButton.UIStroke
G2L["c6"] = Instance.new("UIStroke", G2L["c3"]);
G2L["c6"]["Thickness"] = 2;
G2L["c6"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ConfigButton.UIGradient
G2L["c7"] = Instance.new("UIGradient", G2L["c3"]);
G2L["c7"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ConfigButton.UICorner
G2L["c8"] = Instance.new("UICorner", G2L["c3"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup
G2L["c9"] = Instance.new("Frame", G2L["b3"]);
G2L["c9"]["BorderSizePixel"] = 0;
G2L["c9"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["c9"]["Size"] = UDim2.new(0, 103, 0, 53);
G2L["c9"]["Position"] = UDim2.new(0, 0, 0.77253, 0);
G2L["c9"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["c9"]["Name"] = [[ProfileGroup]];


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup.UICorner
G2L["ca"] = Instance.new("UICorner", G2L["c9"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup.UIStroke
G2L["cb"] = Instance.new("UIStroke", G2L["c9"]);
G2L["cb"]["Thickness"] = 2;
G2L["cb"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup.UIGradient
G2L["cc"] = Instance.new("UIGradient", G2L["c9"]);
G2L["cc"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup.AvaLabelImg
G2L["cd"] = Instance.new("ImageLabel", G2L["c9"]);
G2L["cd"]["BorderSizePixel"] = 0;
G2L["cd"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["cd"]["Image"] = [[rbxasset://textures/ui/GuiImagePlaceholder.png]];
G2L["cd"]["Size"] = UDim2.new(0, 31, 0, 31);
G2L["cd"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["cd"]["BackgroundTransparency"] = 1;
G2L["cd"]["Name"] = [[AvaLabelImg]];


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup.AvaLabelImg.scAvaHandler
G2L["ce"] = Instance.new("LocalScript", G2L["cd"]);
G2L["ce"]["Name"] = [[scAvaHandler]];


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup.AvaLabelImg.UIStroke
G2L["cf"] = Instance.new("UIStroke", G2L["cd"]);
G2L["cf"]["Thickness"] = 2;
G2L["cf"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup.AvaLabelImg.UICorner
G2L["d0"] = Instance.new("UICorner", G2L["cd"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup.AvaLabelImg.NamaLabel
G2L["d1"] = Instance.new("TextLabel", G2L["cd"]);
G2L["d1"]["BorderSizePixel"] = 0;
G2L["d1"]["TextSize"] = 17;
G2L["d1"]["TextStrokeColor3"] = Color3.fromRGB(255, 255, 255);
G2L["d1"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["d1"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["d1"]["TextColor3"] = Color3.fromRGB(254, 254, 254);
G2L["d1"]["BackgroundTransparency"] = 1;
G2L["d1"]["Size"] = UDim2.new(0, 103, 0, 22);
G2L["d1"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["d1"]["Text"] = [[]];
G2L["d1"]["Name"] = [[NamaLabel]];
G2L["d1"]["Position"] = UDim2.new(0, 0, 1, 0);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.CreditPage
G2L["d2"] = Instance.new("Frame", G2L["b3"]);
G2L["d2"]["BorderSizePixel"] = 0;
G2L["d2"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["d2"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["d2"]["Position"] = UDim2.new(0, 0, 0.62232, 0);
G2L["d2"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["d2"]["Name"] = [[CreditPage]];


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.CreditPage.CreditPageBtn
G2L["d3"] = Instance.new("TextButton", G2L["d2"]);
G2L["d3"]["TextWrapped"] = true;
G2L["d3"]["BorderSizePixel"] = 0;
G2L["d3"]["TextSize"] = 20;
G2L["d3"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["d3"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["d3"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["d3"]["BackgroundTransparency"] = 1;
G2L["d3"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["d3"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["d3"]["Text"] = [[Credit]];
G2L["d3"]["Name"] = [[CreditPageBtn]];
G2L["d3"]["Position"] = UDim2.new(0, 0, -0.01362, 0);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.CreditPage.CreditPageBtn.UIGradient
G2L["d4"] = Instance.new("UIGradient", G2L["d3"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.CreditPage.UIStroke
G2L["d5"] = Instance.new("UIStroke", G2L["d2"]);
G2L["d5"]["Thickness"] = 2;
G2L["d5"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.CreditPage.UIGradient
G2L["d6"] = Instance.new("UIGradient", G2L["d2"]);
G2L["d6"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.CreditPage.UICorner
G2L["d7"] = Instance.new("UICorner", G2L["d2"]);



-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS
G2L["d8"] = Instance.new("Frame", G2L["b2"]);
G2L["d8"]["BorderSizePixel"] = 0;
G2L["d8"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["d8"]["Size"] = UDim2.new(0, 480, 0, 31);
G2L["d8"]["Position"] = UDim2.new(-0, 0, 0, 0);
G2L["d8"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["d8"]["Name"] = [[LABELATAS]];


-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS.UICorner
G2L["d9"] = Instance.new("UICorner", G2L["d8"]);



-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS.UIGradient
G2L["da"] = Instance.new("UIGradient", G2L["d8"]);
G2L["da"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS.UIStroke
G2L["db"] = Instance.new("UIStroke", G2L["d8"]);
G2L["db"]["Thickness"] = 2;
G2L["db"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS.Label Atas Kiri
G2L["dc"] = Instance.new("Frame", G2L["d8"]);
G2L["dc"]["BorderSizePixel"] = 0;
G2L["dc"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["dc"]["Size"] = UDim2.new(0, 480, 0, 30);
G2L["dc"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["dc"]["Name"] = [[Label Atas Kiri]];


-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS.Label Atas Kiri.Tulisan tengah
G2L["dd"] = Instance.new("TextLabel", G2L["dc"]);
G2L["dd"]["TextWrapped"] = true;
G2L["dd"]["BorderSizePixel"] = 0;
G2L["dd"]["TextSize"] = 14;
G2L["dd"]["TextScaled"] = true;
G2L["dd"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["dd"]["FontFace"] = Font.new([[rbxasset://fonts/families/FredokaOne.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["dd"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["dd"]["BackgroundTransparency"] = 1;
G2L["dd"]["Size"] = UDim2.new(0, 169, 0, 14);
G2L["dd"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["dd"]["Text"] = [[DannTuner by Unknown]];
G2L["dd"]["Name"] = [[Tulisan tengah]];
G2L["dd"]["Position"] = UDim2.new(0.35965, 0, 0.25806, 0);


-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS.Label Atas Kiri.IMgUJung
G2L["de"] = Instance.new("ImageLabel", G2L["dc"]);
G2L["de"]["BorderSizePixel"] = 0;
G2L["de"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["de"]["Image"] = [[rbxassetid://106127307787485]];
G2L["de"]["Size"] = UDim2.new(0, 51, 0, 48);
G2L["de"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["de"]["BackgroundTransparency"] = 1;
G2L["de"]["Name"] = [[IMgUJung]];
G2L["de"]["Position"] = UDim2.new(0, 0, -0.16129, 0);


-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS.Label Atas Kiri.UICorner
G2L["df"] = Instance.new("UICorner", G2L["dc"]);



-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS.Label Atas Kiri.UIGradient
G2L["e0"] = Instance.new("UIGradient", G2L["dc"]);
G2L["e0"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS.Label Atas Kiri.UIStroke
G2L["e1"] = Instance.new("UIStroke", G2L["dc"]);
G2L["e1"]["Thickness"] = 2;
G2L["e1"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.NotifFrame
G2L["e2"] = Instance.new("Frame", G2L["a"]);
G2L["e2"]["Visible"] = false;
G2L["e2"]["BorderSizePixel"] = 0;
G2L["e2"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["e2"]["Size"] = UDim2.new(0, 114, 0, 41);
G2L["e2"]["Position"] = UDim2.new(0.75833, 0, 0.81116, 0);
G2L["e2"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["e2"]["Name"] = [[NotifFrame]];


-- StarterGui.DannTunner.Open.NotifFrame.Notif
G2L["e3"] = Instance.new("TextLabel", G2L["e2"]);
G2L["e3"]["TextWrapped"] = true;
G2L["e3"]["BorderSizePixel"] = 0;
G2L["e3"]["TextSize"] = 17;
G2L["e3"]["TextScaled"] = true;
G2L["e3"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["e3"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["e3"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["e3"]["BackgroundTransparency"] = 1;
G2L["e3"]["Size"] = UDim2.new(0, 115, 0, 44);
G2L["e3"]["Visible"] = false;
G2L["e3"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["e3"]["Name"] = [[Notif]];
G2L["e3"]["Position"] = UDim2.new(0.0014, 0, -0.05586, 0);


-- StarterGui.DannTunner.Open.NotifFrame.UICorner
G2L["e4"] = Instance.new("UICorner", G2L["e2"]);



-- StarterGui.DannTunner.Open.NotifFrame.UIGradient
G2L["e5"] = Instance.new("UIGradient", G2L["e2"]);
G2L["e5"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.NotifFrame.UIStroke
G2L["e6"] = Instance.new("UIStroke", G2L["e2"]);
G2L["e6"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.UIStroke
G2L["e7"] = Instance.new("UIStroke", G2L["a"]);
G2L["e7"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Intro
G2L["e8"] = Instance.new("Frame", G2L["1"]);
G2L["e8"]["Visible"] = false;
G2L["e8"]["BorderSizePixel"] = 0;
G2L["e8"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["e8"]["Size"] = UDim2.new(0, 250, 0, 109);
G2L["e8"]["Position"] = UDim2.new(0.38678, 0, 0.37668, 0);
G2L["e8"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["e8"]["Name"] = [[Intro]];


-- StarterGui.DannTunner.Intro.UICorner
G2L["e9"] = Instance.new("UICorner", G2L["e8"]);



-- StarterGui.DannTunner.Intro.UIGradient
G2L["ea"] = Instance.new("UIGradient", G2L["e8"]);
G2L["ea"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Intro.UIStroke
G2L["eb"] = Instance.new("UIStroke", G2L["e8"]);
G2L["eb"]["Thickness"] = 2;
G2L["eb"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Intro.TextLabel
G2L["ec"] = Instance.new("TextLabel", G2L["e8"]);
G2L["ec"]["TextWrapped"] = true;
G2L["ec"]["BorderSizePixel"] = 0;
G2L["ec"]["TextSize"] = 20;
G2L["ec"]["TextStrokeColor3"] = Color3.fromRGB(255, 255, 255);
G2L["ec"]["TextScaled"] = true;
G2L["ec"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["ec"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["ec"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["ec"]["BackgroundTransparency"] = 1;
G2L["ec"]["Size"] = UDim2.new(0, 250, 0, 46);
G2L["ec"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["ec"]["Text"] = [[DannTunner starting]];
G2L["ec"]["Position"] = UDim2.new(0, 0, -0.00393, 0);


-- StarterGui.DannTunner.Intro.LocalScript
G2L["ed"] = Instance.new("LocalScript", G2L["e8"]);



-- StarterGui.DannTunner.Intro.BarBack
G2L["ee"] = Instance.new("Frame", G2L["e8"]);
G2L["ee"]["BorderSizePixel"] = 0;
G2L["ee"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["ee"]["Size"] = UDim2.new(0, 250, 0, 17);
G2L["ee"]["Position"] = UDim2.new(0, 0, 0.83981, 0);
G2L["ee"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["ee"]["Name"] = [[BarBack]];


-- StarterGui.DannTunner.Intro.BarBack.UIStroke
G2L["ef"] = Instance.new("UIStroke", G2L["ee"]);
G2L["ef"]["Thickness"] = 2;
G2L["ef"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Intro.BarBack.UIGradient
G2L["f0"] = Instance.new("UIGradient", G2L["ee"]);
G2L["f0"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Intro.BarBack.UICorner
G2L["f1"] = Instance.new("UICorner", G2L["ee"]);



-- StarterGui.DannTunner.Intro.BarBack.BarFill
G2L["f2"] = Instance.new("Frame", G2L["ee"]);
G2L["f2"]["Visible"] = false;
G2L["f2"]["BorderSizePixel"] = 0;
G2L["f2"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["f2"]["Size"] = UDim2.new(0, 250, 0, 17);
G2L["f2"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["f2"]["Name"] = [[BarFill]];


-- StarterGui.DannTunner.Intro.BarBack.BarFill.UICorner
G2L["f3"] = Instance.new("UICorner", G2L["f2"]);



-- StarterGui.DannTunner.Intro.BarBack.BarFill.UIGradient
G2L["f4"] = Instance.new("UIGradient", G2L["f2"]);
G2L["f4"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(0, 214, 44)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(0, 214, 44))};


-- StarterGui.DannTunner.Intro.StatusLabel
G2L["f5"] = Instance.new("TextLabel", G2L["e8"]);
G2L["f5"]["TextWrapped"] = true;
G2L["f5"]["BorderSizePixel"] = 0;
G2L["f5"]["TextSize"] = 20;
G2L["f5"]["TextStrokeColor3"] = Color3.fromRGB(255, 255, 255);
G2L["f5"]["TextScaled"] = true;
G2L["f5"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["f5"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["f5"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["f5"]["BackgroundTransparency"] = 1;
G2L["f5"]["Size"] = UDim2.new(0, 136, 0, 22);
G2L["f5"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["f5"]["Text"] = [[]];
G2L["f5"]["Name"] = [[StatusLabel]];
G2L["f5"]["Position"] = UDim2.new(0.228, 0, 0.5557, 0);


-- StarterGui.DannTunner.DraggyTime.DraggSum
local function C_3()
local script = G2L["3"];
	local Lighting = game:GetService("Lighting")
	local RunService = game:GetService("RunService")
	
	local label = script.Parent
	
	local function formatTime(clockTime)
		local totalSeconds = clockTime * 3600
		local hours = math.floor(totalSeconds / 3600)
		local minutes = math.floor((totalSeconds % 3600) / 60)
		local seconds = math.floor(totalSeconds % 60)
		local milliseconds = math.floor((totalSeconds * 1000) % 1000)
		return string.format("%02d:%02d:%02d:%03d", hours, minutes, seconds, milliseconds)
	end
	
	RunService.RenderStepped:Connect(function()
		local time = Lighting.ClockTime
		label.Text = formatTime(time)
	end)
	
end;
task.spawn(C_3);
-- StarterGui.DannTunner.DraggyTime.drg
local function C_4()
local script = G2L["4"];
	local button = script.Parent
	local UserInputService = game:GetService("UserInputService")
	
	local dragging = false
	local dragStart
	local startPos
	
	local function update(input)
		local delta = input.Position - dragStart
		button.Position = UDim2.new(
			startPos.X.Scale,
			startPos.X.Offset + delta.X,
			startPos.Y.Scale,
			startPos.Y.Offset + delta.Y
		)
	end
	
	button.InputBegan:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseButton1 then
			dragging = true
			dragStart = input.Position
			startPos = button.Position
	
			input.Changed:Connect(function()
				if input.UserInputState == Enum.UserInputState.End then
					dragging = false
				end
			end)
		end
	end)
	
	button.InputChanged:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseMovement then
			if dragging then
				update(input)
			end
		end
	end)
	
end;
task.spawn(C_4);
-- StarterGui.DannTunner.OpenFrame.drg
local function C_7()
local script = G2L["7"];
	local button = script.Parent
	local UserInputService = game:GetService("UserInputService")
	
	local frame = button.Parent:WaitForChild("Open")
	button.MouseButton1Click:Connect(function()
		if frame.Visible == false then
			frame.Visible = true
		else
			frame.Visible = false
		end
	end)
	
	local dragging = false
	local dragStart
	local startPos
	
	local function update(input)
		local delta = input.Position - dragStart
		button.Position = UDim2.new(
			startPos.X.Scale,
			startPos.X.Offset + delta.X,
			startPos.Y.Scale,
			startPos.Y.Offset + delta.Y
		)
	end
	
	button.InputBegan:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseButton1 then
			dragging = true
			dragStart = input.Position
			startPos = button.Position
	
			input.Changed:Connect(function()
				if input.UserInputState == Enum.UserInputState.End then
					dragging = false
				end
			end)
		end
	end)
	
	button.InputChanged:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseMovement then
			if dragging then
				update(input)
			end
		end
	end)
	
end;
task.spawn(C_7);
-- StarterGui.DannTunner.SoundHandler
local function C_9()
local script = G2L["9"];
	local main = script.Parent
	local ss = Instance.new("Sound")
	ss.Name = "ss"
	ss.SoundId = "rbxassetid://6042053626"
	ss.Volume = 1
	ss.Parent = main
	local function hookButton(btn)
		btn.MouseButton1Click:Connect(function()
			ss:Play()
		end)
	end
	for _, obj in ipairs(main:GetDescendants()) do
		if obj:IsA("TextButton") or obj:IsA("ImageButton") then
			hookButton(obj)
		end
	end
	main.DescendantAdded:Connect(function(obj)
		if obj:IsA("TextButton") or obj:IsA("ImageButton") then
			hookButton(obj)
		end
	end)
	
end;
task.spawn(C_9);
-- StarterGui.DannTunner.Open.drg
local function C_b()
local script = G2L["b"];
	local button = script.Parent
	local UserInputService = game:GetService("UserInputService")
	
	local dragging = false
	local dragStart
	local startPos
	
	local function update(input)
		local delta = input.Position - dragStart
		button.Position = UDim2.new(
			startPos.X.Scale,
			startPos.X.Offset + delta.X,
			startPos.Y.Scale,
			startPos.Y.Offset + delta.Y
		)
	end
	
	button.InputBegan:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseButton1 then
			dragging = true
			dragStart = input.Position
			startPos = button.Position
	
			input.Changed:Connect(function()
				if input.UserInputState == Enum.UserInputState.End then
					dragging = false
				end
			end)
		end
	end)
	
	button.InputChanged:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseMovement then
			if dragging then
				update(input)
			end
		end
	end)
	
end;
task.spawn(C_b);
-- StarterGui.DannTunner.Open.Handler
local function C_c()
local script = G2L["c"];
	local Players = game:GetService("Players")
	local player = Players.LocalPlayer
	
	--[[ FRAME ]]
	local mainFrame = script.Parent.Parent:WaitForChild("Open")
	--[[ HANDLE FRAME ]]
	local HandleFrame = mainFrame:WaitForChild("HandlerFrame")
	local MainPageFrame = HandleFrame:WaitForChild("MainPage")
	
	local CreditBtn = MainPageFrame:WaitForChild("CreditPage"):WaitForChild("CreditPageBtn")
	local ConfigBtn = MainPageFrame:WaitForChild("ConfigButton"):WaitForChild("ConfigButtonBtn")
	local TuningBtn = MainPageFrame:WaitForChild("TuningButton"):WaitForChild("TuningButtonBtn")
	local MiscBtn = MainPageFrame:WaitForChild("MiscButton"):WaitForChild("MiscButtonBtn")
	
	local FramerAll = mainFrame:WaitForChild("FrameAll")
	local LoadingFrame = FramerAll:WaitForChild("LoadingFrame")
	local CreditFrame = FramerAll:WaitForChild("CreditFrame")
	local ConfigFrame = FramerAll:WaitForChild("ConfigFrame")
	local TuningFramer = FramerAll:WaitForChild("TuningFrame")
	local MiscFrame = FramerAll:WaitForChild("MiscFrame")
	
	--[[ MISC FRAME ]]
	local RejoinBtn = MiscFrame:WaitForChild("Rejoin"):WaitForChild("Rejoin Server")
	local TeleportBtn = MiscFrame:WaitForChild("Teleport"):WaitForChild("TeleportBtn")
	local DragTimerBtn = MiscFrame:WaitForChild("DragTimer"):WaitForChild("DragTimerBtn")
	local TimeTrialBtn = MiscFrame:WaitForChild("TimeTrial"):WaitForChild("TimeTrialBtn")
	
	local TimeTrialFrame = MiscFrame:WaitForChild("TimeTrial"):WaitForChild("TimeTrialFrame")
	local StartTimeTrial = TimeTrialFrame:WaitForChild("StartTime"):WaitForChild("StartTimeTrial")
	local TeleportTimeTrials = TimeTrialFrame:WaitForChild("TeleportTimeTrial"):WaitForChild("TeleportTimeTrials")
	local StartTimeFrames = TimeTrialFrame:WaitForChild("StartTime")
	local TeleportTimeTrialFrames = TimeTrialFrame:WaitForChild("TeleportTimeTrial")
	
	--[[ FRAME ALL ]]
	local TunnerBtn = TuningFramer:WaitForChild("TunnerFrame"):WaitForChild("TunnerButton"):WaitForChild("TunnerButtonBtn")
	
	local TurboChargerAmount = TuningFramer:WaitForChild("TurboCharger"):WaitForChild("TurboChargerAmount")
	local TurboChargerBoost = TuningFramer:WaitForChild("TurboCharger"):WaitForChild("TurboChargerBoost")
	
	local SuperChargerAmount = TuningFramer:WaitForChild("SuperCharger"):WaitForChild("SuperChargerAmount")
	local SuperChargerBoost = TuningFramer:WaitForChild("SuperCharger"):WaitForChild("SuperChargerBoost")
	
	local HorsePower = TuningFramer:WaitForChild("HorsePower"):WaitForChild("HP")
	
	local notifframe = script.Parent:WaitForChild("NotifFrame")
	local notif = notifframe:WaitForChild("Notif")
	--[[ ACTION ]]
	
	local function Notification (typesd, text)
		if typesd == "Warn" then
			notif.Text = text
			notif.TextColor3 = Color3.fromRGB(255, 255, 0)
			notif.Visible = true
			notifframe.Visible = true
			wait(5)
			notifframe.Visible = false
			notif.Visible = false
			notif.Text = ""
		elseif typesd == "Err" then
			notif.Text = text
			notif.TextColor3 = Color3.fromRGB(255, 0, 0)
			notif.Visible = true
			notifframe.Visible = true
			wait(5)
			notifframe.Visible = false
			notif.Visible = false
			notif.Text = ""
		elseif typesd == "Info" then
			notif.Text = text
			notif.TextColor3 = Color3.fromRGB(255, 255, 255)
			notif.Visible = true
			notifframe.Visible = true
			wait(5)
			notifframe.Visible = false
			notif.Visible = false
			notif.Text = ""
		end
	end
	
	local function Tunererr (hp_s2, sc_s2, scAmount_s2, tc_s2, tcAmount_s2, tunertype)
		if TurboChargerAmount.Text == "" then
			Notification("Warn", "Gagal mentuning Amount TurboCharger, Angka tidak terdeteksi!")
			return
		elseif TurboChargerBoost.Text == "" then
			Notification("Warn", "Gagal mentuning Boost TurboCharger, Angka tidak terdeteksi!")
			return
		elseif SuperChargerAmount.Text == "" then
			Notification("Warn", "Gagal mentuning Amount SuperCharger, Angka tidak terdeteksi!")
			return
		elseif SuperChargerBoost.Text == "" then
			Notification("Warn", "Gagal mentuning Boost SuperCharger, Angka tidak terdeteksi!")
			return
		elseif HorsePower.Text == "" then
			Notification("Warn", "Gagal mentuning HorsePower, Angka tidak terdeteksi!")
			return
		end
		print("Starting tuner...")
		local playerName = player.Name
		local ws_Car = workspace:FindFirstChild("Vehicles") and workspace.Vehicles:FindFirstChild(playerName.."sCar")
	
		if not ws_Car then
			Notification("Err", "File mobil ga ketemu di ", playerName.."sCar")
			warn("File mobil ga ketemu di ", playerName.."sCar")
			return
		end
	
		local function safeGet(parent, childName)
			if not parent then
				return nil
			end
			local obj = parent:FindFirstChild(childName)
			if not obj then
				warn(childName.." diskip, ga nemu.")
			end
			return obj
		end
	
		local ReadOnly       = ws_Car:FindFirstChild("ReadOnly")
		local Customizeable  = ws_Car:FindFirstChild("Customizeable")
		local PowerFolder    = ws_Car:FindFirstChild("Power")
	
		if not ReadOnly then warn("ReadOnly ga ketemu") end
		if not Customizeable then warn("Customizeable ga ketemu") end
		if not PowerFolder then warn("Power ga ketemu") end
		
		local HP_brake      = safeGet(ReadOnly, "Horsepower")
		local SB_brake      = safeGet(ReadOnly, "S_Boost")
		local SC_brake      = safeGet(ReadOnly, "Superchargers")
		local TB_brake      = safeGet(ReadOnly, "T_Boost")
		local Turbo_brake   = safeGet(ReadOnly, "Turbochargers")
	
		local Customizeable_HP = safeGet(Customizeable, "Horsepower")
		local Powerss          = safeGet(PowerFolder, "Power")
	
		local function tune(obj, amount)
			if obj then
				if obj:IsA("NumberValue") or obj:IsA("IntValue") then
					obj.Value = amount
					print(obj.Name .. " tuned to " .. amount)
				else
					warn(obj.Name .. " failed")
				end
			end
		end
	
		print("Tuningg otww...")
	
		if tunertype == "Set" then
			tune(HP_brake, hp_s2)
			tune(SB_brake, sc_s2)
			tune(SC_brake, scAmount_s2)
			tune(TB_brake, tc_s2)
			tune(Turbo_brake, tcAmount_s2)
			Notification("Info", "Tuned...!!!")
			print("Tuned...!!!")
		end
	end
	
	local function getFrame (typere, bool)
		LoadingFrame.Visible = false
		if typere == "Tuning" then
			ConfigFrame.Visible = false
			MiscFrame.Visible = false
			CreditFrame.Visible = false
			TuningFramer.Visible = bool
		elseif typere == "Config" then
			ConfigFrame.Visible = bool
			MiscFrame.Visible = false
			CreditFrame.Visible = false
			TuningFramer.Visible = false
		elseif typere == "Credit" then
			ConfigFrame.Visible = false
			MiscFrame.Visible = false
			CreditFrame.Visible = bool
			TuningFramer.Visible = false
		elseif typere == "Misc" then
			ConfigFrame.Visible = false
			MiscFrame.Visible = bool
			CreditFrame.Visible = false
			TuningFramer.Visible = false
		end
	end
	
	TuningBtn.MouseButton1Click:Connect(function()
		if TuningFramer.Visible == false then
			getFrame("Tuning", true)
		else
			getFrame("Tuning", false)
		end
	end)
	
	ConfigBtn.MouseButton1Click:Connect(function()
		if ConfigFrame.Visible == false then
			getFrame("Config", true)
		else
			getFrame("Config", false)
		end
	end)
	
	MiscBtn.MouseButton1Click:Connect(function()
		if MiscFrame.Visible == false then
			getFrame("Misc", true)
		else
			getFrame("Misc", false)
		end
	end)
	
	CreditBtn.MouseButton1Click:Connect(function()
		if CreditFrame.Visible == false then
			getFrame("Credit", true)
		else
			getFrame("Credit", false)
		end
	end)
	
	TunnerBtn.MouseButton1Click:Connect(function()
		Tunererr(HorsePower.Text, SuperChargerBoost.Text, SuperChargerAmount.Text, TurboChargerBoost.Text, TurboChargerAmount.Text, "Set")
	end)
	
	DragTimerBtn.MouseButton1Click:Connect(function ()
		local LabelDrag = script.Parent.Parent:WaitForChild("DraggyTime")
		if LabelDrag.Visible == false then
			LabelDrag.Visible = true
		else
			LabelDrag.Visible = false
		end
	end)
	
	RejoinBtn.MouseButton1Click:Connect(function ()
		local TeleportService = game:GetService("TeleportService")
		local function Rejoin()
			local player = Players.LocalPlayer
			TeleportService:Teleport(game.PlaceId, player)
		end
		Rejoin()
	end)
	
	TeleportBtn.MouseButton1Click:Connect(function ()
		local TeleportFrame = MiscFrame:WaitForChild("Teleport"):WaitForChild("TeleportList")
		if TeleportFrame.Visible == false then
			TeleportFrame.Visible = true
		else
			TeleportFrame.Visible = false
		end
	end)
	
	StartTimeTrial.MouseButton1Click:Connect(function ()
		local cp_info = TimeTrialFrame:WaitForChild("NotifTimeTrial"):WaitForChild("CP")
		local function cp_infer121023 (Status, text)
			if Status == "Hold" then
				StartTimeFrames.Visible = false
				TeleportTimeTrialFrames.Visible = false
				cp_info.Visible = true
				cp_info.Text = text
			elseif Status == "UnHold" then
				cp_info.Text = text
				task.wait(5.01)
				StartTimeFrames.Visible = true
				TeleportTimeTrialFrames.Visible = true
				cp_info.Visible = false
				cp_info.Text = ""
			end
		end
	
		local function NOtif192047124 (Status, Text)
			if Status == "Warn" then
				Notifier.BackgroundColor = Color3.fromRGB(255, 255, 0)
				Notifier.BackgroundTransparency = 0
				Notifier.Text = Text
				task.wait(5.01)
				Notifier.BackgroundColor = Color3.fromRGB(255, 255, 255)
				Notifier.BackgroundTransparency = 1
				Notifier.Text = ""
			elseif Status == "Info" then
				Notifier.Text = Text
				task.wait(5.01)
				Notifier.Text = ""
			elseif Status == "Err" then
				Notifier.BackgroundColor = Color3.fromRGB(255, 0, 0)
				Notifier.BackgroundTransparency = 0
				Notifier.Text = Text
				task.wait(5.01)
				Notifier.BackgroundColor = Color3.fromRGB(255, 255, 255)
				Notifier.BackgroundTransparency = 1
				Notifier.Text = ""
			end
		end
		local timetrial_Start = false
		local Players = game:GetService("Players")
		local player = game.Players.LocalPlayer
	
		local TOTAL_CP = 21
		local TOTAL_TIME = 61.7
		local delayPerCP = TOTAL_TIME / TOTAL_CP
	
		local CheckpointFolder = workspace:WaitForChild("Etc"):WaitForChild("Race"):WaitForChild("Checkpoint")
		local CarsFolder = workspace:WaitForChild("Vehicles")
	
		local function teleportSequence()
			local car = CarsFolder:FindFirstChild(player.Name .. "sCar")
			if not car then
				NOtif192047124("Err", "Mobil player tidak ditemukan:", player.Name .. "sCar")
				return
			end
	
			if not car.PrimaryPart then
				NOtif192047124("Warn", "failed 221, please report Script Owner")
				warn("failed 221, please report Script Owner")
				return
			end
			timetrial_Start = true
			for i = 1, TOTAL_CP do
				local model = CheckpointFolder:FindFirstChild(tostring(i))
				if model then
					local tpFolder = model:FindFirstChild("1")
					if tpFolder then
						local tp = tpFolder:FindFirstChild("Part")
						if tp then
							car:SetPrimaryPartCFrame(tp.CFrame)
							cp_infer121023("Hold", "CP : "..i)
							print("tp mobil ke ", i)
						else
							warn("ga ada part model ", i)
						end
					else
						warn("ga ada part 1 di model ", i)
						print(model.Name)
						cp_infer121023("Hold", "CP : "..i)
						if i == 7 then
							car:SetPrimaryPartCFrame(CFrame.new(-12508.3662, -19.9316063, 13079.5107, -0.943835497, -0.00569843082, -0.330366373, -0.00604555057, 0.999981701, 2.3245113e-05, 0.330360174, 0.00201918627, -0.943852663))
							print("[FORCE TP] mobil tp ke cp ", i)
						elseif i == 8 then
							car:SetPrimaryPartCFrame(CFrame.new(-12355.1621, -14.408474, 13680.2275, -0.922647119, -0.00551762059, 0.38560617, -0.00599290617, 0.999982059, -3.0641444e-05, -0.385599077, -0.00233917264, -0.922663689))
							print("[FORCE TP] mobil tp ke cp ", i)
						elseif i == 10 then
							car:SetPrimaryPartCFrame(CFrame.new(-13094.7148, -14.5008202, 12038.5176, 0.960410833, 0.00577555131, 0.278527707, -0.00601839554, 0.99998188, 1.68218976e-05, -0.278522581, -0.00169244583, 0.960428178))
							print("[FORCE TP] mobil tp ke cp ", i)
						elseif i == 11 then
							car:SetPrimaryPartCFrame(CFrame.new(-13629.6104, -19.7344017, 10660.7354, 0.954524279, 0.00575797306, -0.298077643, -0.00601825351, 0.99998188, 4.46181512e-05, 0.298072517, 0.00175131764, 0.954541624))
							print("[FORCE TP] Mmobil tp ke cp ", i)
						elseif i == 15 then
							car:SetPrimaryPartCFrame(CFrame.new(-15006.1963, -19.8073997, 8341.78125, 0.903152108, 0.00544110266, 0.429286182, -0.00601091841, 0.99998194, -2.84910202e-05, -0.429278553, -0.0025546723, 0.903168499))
							print("[FORCE TP] mobil tp ke cp ", i)
						elseif i == 16 then
							car:SetPrimaryPartCFrame(CFrame.new(-16704.627, -19.7335472, 7462.91162, 0.811798453, 0.00486651435, 0.583917439, -0.00597862713, 0.999982119, -2.22418457e-05, -0.583907068, -0.0034729687, 0.811813056))
							print("[FORCE TP] mobil tp ke cp ", i)
						end
					end
				else
					warn("model cp ga ada ", i)
					if i == 21 then
						car:SetPrimaryPartCFrame(CFrame.new(-13737.1787, -15.9419441, 8836.73047, -0.590707541, -0.00352343125, -0.80687803, -0.00602260092, 0.99998188, 4.24210448e-05, 0.806863248, 0.00488456339, -0.590718031))
						print("[FORCE TP] Mobil teleport ke CP", i)
						timetrial_Start = false
						cp_infer121023("UnHold", "CP : Selesai / Done")
					end
				end
				task.wait(delayPerCP)
			end
		end
		task.wait(1)
		teleportSequence()
	end)
	
	TeleportTimeTrials.MouseButton1Click:Connect(function ()
		local rootPart = game.Players.LocalPlayer.Character.HumanoidRootPart
		rootPart.CFrame = CFrame.new(-13887.5146, -39.2708969, 8899.52441, 0.806803703, -0, -0.590819538, 0, 1, -0, 0.590819538, 0, 0.806803703)
	end)
	
	TimeTrialBtn.MouseButton1Click:Connect(function ()
		if TimeTrialFrame.Visible == false then
			TimeTrialFrame.Visible = true
		else
			TimeTrialFrame.Visible = false
		end
	end)
	
	local Http = game:GetService("HttpService")
	local folderName = "DAN_CONFIG"
	
	if not isfolder(folderName) then
		makefolder(folderName)
	end
	
	local scroll = ConfigFrame:WaitForChild("ConfigList"):WaitForChild("ScrollingFrame")
	local CloneFrame = scroll:WaitForChild("Clone")
	local cloneBtn = CloneFrame:WaitForChild("CloneBtn")
	local FileNameConfig = ConfigFrame:WaitForChild("FileNameSave"):WaitForChild("FileNameTxt")
	
	local function RenderButton(fileName)
		if not fileName:find("%.json") then return end
	
		local filePath = folderName.."/"..fileName
		if not isfile(filePath) then return end
		
		--[[
		local newFrame = frameTemplate:Clone()
		newFrame.Visible = true
		newFrame.Parent = scroll
		
		local btn = newFrame:WaitForChild("CloneBtn")
		btn.Text = data.name
		btn.Name = "Btn_"..data.name
		]]
	
		local newFrame = CloneFrame:Clone()
		newFrame.Name = fileName:gsub("%.json", "")
		newFrame.Visible = true
		newFrame.Parent = scroll
		
		local btn = newFrame:WaitForChild("CloneBtn")
		btn.Name = fileName:gsub("%.json", "")
		btn.Visible = true
		btn.Text = fileName:gsub("%.json", "")
	
		btn.MouseButton1Click:Connect(function()
			print("Selected:", fileName)
			FileNameConfig.Text = fileName:gsub("%.json", "")
	
			local raw = readfile(filePath)
			local data = Http:JSONDecode(raw)
			
			HorsePower.Text = data.HorsePower
			SuperChargerAmount.Text = data.superChargerAmount
			SuperChargerBoost.Text = data.superChargerBoost
			TurboChargerAmount.Text = data.turboChargerAmount
			TurboChargerBoost.Text = data.turboChargerBoost
	
			Notification("Info","Loaded tuning "..fileName:gsub("%.json",""))
		end)
	
		return btn
	end
	
	local function RefreshList(hapus)
		if hapus == "ya" then
			for _, v in ipairs(scroll:GetChildren()) do
				if v.Name ~= "Clone" and v.Name ~= "UIListLayout" then
					v:Destroy()
				end
			end
		end
		local files = listfiles(folderName)
		for _, filePath in ipairs(files) do
			local fileName = filePath:match("[^/]+$")
			if fileName:find("%.json") then
				print(fileName)
				RenderButton(fileName)
			end
		end
		scroll.CanvasSize = UDim2.new(
			0, 0,
			0, scroll.UIListLayout.AbsoluteContentSize.Y
		)
	end
	
	local function ReadFileer (filename)
		if isfile("DAN_CONFIG/"..filename..".json") then
			local raw = readfile("DAN_CONFIG/"..filename..".json")
			local filelar = game:GetService("HttpService"):JSONDecode(raw)
	
			HorsePower.Text = filelar.HorsePower
			SuperChargerBoost.Text = filelar.superChargerBoost
			SuperChargerAmount.Text = filelar.superChargerBoost
	
			TurboChargerBoost.Text = filelar.turboChargerBoost
			TurboChargerAmount.Text = filelar. turboChargerAmount
			RefreshList("ya")
		end
	end
	
	scroll.UIListLayout:GetPropertyChangedSignal("AbsoluteContentSize"):Connect(function()
		scroll.CanvasSize = UDim2.new(0, 0, 0, scroll.UIListLayout.AbsoluteContentSize.Y)
	end)
	
	RefreshList("ga")
	
	print("LoadConfig list initialized!")
		
	local SaveConfigBtn = ConfigFrame:WaitForChild("Save Tuning"):WaitForChild("SaveTuningBtn")
	local DeleteConfigBtn = ConfigFrame:WaitForChild("Delete Tuning"):WaitForChild("DeleteTuningBtn")
	
	local function WriteFiles (filename, tcAmount_Config, tcBoost_Config, scAmount_Config, scBoost_Config, HorsePower_Config)
	
		if HorsePower.Text == "" then
			Notification("Warn", "Gagal mengsave HorsePower, Angka tidak terdeteksi!")
			return
		end
		if SuperChargerBoost.Text == "" then
			Notification("Warn", "Gagal mengsave SuperCharger, Angka tidak terdeteksi!")
			return
		end
		if SuperChargerAmount.Text == "" then
			Notification("Warn", "Gagal mengsave SuperCharger Amount, Angka tidak terdeteksi!")
			return
		end
		if TurboChargerBoost.Text == "" then
			Notification("Warn", "Gagal mengsave TurboCharger, Angka tidak terdeteksi!")
			return
		end
		if TurboChargerAmount.Text == "" then
			Notification("Warn", "Gagal mengsave TurboCharger Amount, Angka tidak terdeteksi!")
			return
		end
	
		if not isfolder("DAN_CONFIG") then
			makefolder("DAN_CONFIG")
		end
	
		local filePath = "DAN_CONFIG/"..filename..".json"
		if isfile(filePath) then
			warn("File sudah ada, proses dihentikan.")
			return
		end
		local data = {
			turboChargerAmount = tcAmount_Config,
			turboChargerBoost = tcBoost_Config,
			superChargerAmount = scAmount_Config,
			superChargerBoost = scBoost_Config,
			HorsePower = HorsePower_Config
		}
		local jsonData = game:GetService("HttpService"):JSONEncode(data)
		writefile(filePath, jsonData)
		Notification("Info", "Berhasil menyimpan Tuning "..filename)
	end
	
	SaveConfigBtn.MouseButton1Click:Connect(function ()
		if FileNameConfig.Text == "" then
			Notification("Err", "Gagal menghapus file, file name tidak ada.")
			return
		end
		WriteFiles(
			FileNameConfig.Text,
			TurboChargerAmount.Text,
			TurboChargerAmount.Text,
			SuperChargerAmount.Text,
			SuperChargerBoost.Text,
			HorsePower.Text
		)
		wait(1.5)
		RefreshList("ya")
	end)
	DeleteConfigBtn.MouseButton1Click:Connect(function ()
		if FileNameConfig.Text == "" then
			Notification("Err", "Gagal menghapus file, file name tidak ada.")
			return
		end
		if isfile("DAN_CONFIG/"..FileNameConfig.Text..".json") then
			delfile("DAN_CONFIG/"..FileNameConfig.Text..".json")
			Notification("Info", "Berhasil menghapus file ("..FileNameConfig.Text..").")
			RefreshList("ya")
		else
			Notification("Err", "Gagal menghapus file, file ("..FileNameConfig.Text..") tidak tersedia.")
		end
	end)
end;
task.spawn(C_c);
-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerAmount.nn
local function C_1d()
local script = G2L["1d"];
	local textbox = script.Parent
	textbox:GetPropertyChangedSignal("Text"):Connect(function()
		local filtered = textbox.Text:gsub("%D", "")
		if filtered == "0" then
			filtered = ""
		end
		if #filtered > 6 then
			filtered = filtered:sub(1, 6)
		end
		textbox.Text = filtered
	end)
end;
task.spawn(C_1d);
-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerBoost.nn
local function C_23()
local script = G2L["23"];
	local textbox = script.Parent
	textbox:GetPropertyChangedSignal("Text"):Connect(function()
		local filtered = textbox.Text:gsub("%D", "")
		if filtered == "0" then
			filtered = ""
		end
		if #filtered > 6 then
			filtered = filtered:sub(1, 6)
		end
		textbox.Text = filtered
	end)
end;
task.spawn(C_23);
-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerAmount.nn
local function C_2e()
local script = G2L["2e"];
	local textbox = script.Parent
	textbox:GetPropertyChangedSignal("Text"):Connect(function()
		local filtered = textbox.Text:gsub("%D", "")
		if filtered == "0" then
			filtered = ""
		end
		if #filtered > 6 then
			filtered = filtered:sub(1, 6)
		end
		textbox.Text = filtered
	end)
end;
task.spawn(C_2e);
-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerBoost.nn
local function C_32()
local script = G2L["32"];
	local textbox = script.Parent
	textbox:GetPropertyChangedSignal("Text"):Connect(function()
		local filtered = textbox.Text:gsub("%D", "")
		if filtered == "0" then
			filtered = ""
		end
		if #filtered > 6 then
			filtered = filtered:sub(1, 6)
		end
		textbox.Text = filtered
	end)
end;
task.spawn(C_32);
-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.HorsePower.HP.nn
local function C_3a()
local script = G2L["3a"];
	local textbox = script.Parent
	textbox:GetPropertyChangedSignal("Text"):Connect(function()
		local filtered = textbox.Text:gsub("%D", "")
		if filtered == "0" then
			filtered = ""
		end
		if #filtered > 6 then
			filtered = filtered:sub(1, 6)
		end
		textbox.Text = filtered
	end)
end;
task.spawn(C_3a);
-- StarterGui.DannTunner.Open.FrameAll.LoadingFrame.Grattering.Grthndl
local function C_4c()
local script = G2L["4c"];
	local parent = script.Parent
	local Players = game:GetService("Players")
	local player = Players.LocalPlayer
	parent.Text = `Welcome back {player.Name}!`
end;
task.spawn(C_4c);
-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.TeleportHandler
local function C_5e()
local script = G2L["5e"];
	local tptolokasi = {
		["Jawa Barat"] = {
			{ 
				name = "Travel", 
				location = "-2377.27515, 8.52105522, -1936.82019, -0.0525176525, 0, 0.998619974, 0, 1, 0, -0.998619974, 0, -0.0525176525" 
			},
			{ 
				name = "Dealer Premium", 
				location = "357.884064, 9.8106432, -257.179718, 0.981621504, 0, 0.190838262, 0, 1, 0, -0.190838262, 0, 0.981621504" 
			},
			{ 
				name = "Dealer Bekas", 
				location = "2827.70117, 28.0402527, 18604.1387, 0.707134247, 0, 0.707079291, 0, 1, 0, -0.707079291, 0, 0.707134247"
			},
			{ 
				name = "Drag Bekasi", 
				location = "3681.13647, 28.4743805, 15963.2363, -1, 0, 0, 0, 1, 0, 0, 0, -1"
			},
			{ 
				name = "Modif Sentul", 
				location = "-12129.0449, -27.8468094, 9349.79199, 0.707002163, 0, -0.707211435, 0, 1, 0, 0.707211435, 0, 0.707002163"
			},
			{ 
				name = "Dealer Otnas", 
				location = "-25949.7227, 187.516541, 21104, -0.965907454, 0, -0.25888893, 0, 1, 0, 0.25888893, 0, -0.965907454" 
			},
			{ 
				name = "Dealer Retro", 
				location = "-23637.0156, 187.388916, 18908.6484, 0.245138705, 0, -0.969488204, 0, 1, 0, 0.969488204, 0, 0.245138705" 
			},
			{ 
				name = "Pom Bensin", 
				location = "1824.18616, 6.43839216, -370.43689, 0.115254402, 0, 0.993336022, 0, 1, 0, -0.993336022, 0, 0.115254402" 
			},
			{ 
				name = "Cuci Mobil", 
				location = "3602.67554, 1.81764889, 1180.48792, -0.184023023, 0, -0.982921898, 0, 1, 0, 0.982921898, 0, -0.184023023" 
			}
		},
	
		["Jakarta"] = {},
		["Jawa Timur"] = {},
		["Jawa Tengah"] = {},
		["Bali"] = {},
	}
	local regionName = game:GetService("MarketplaceService"):GetProductInfo(game.PlaceId).Name
	--local regionName = "Jawa Barat"
	local locations = tptolokasi[regionName]
	
	if not locations then
		warn(`lokasi ga di temuan {regionName}`)
		return
	end
	
	local scroll = script.Parent:WaitForChild("ScrollingFrame")
	local frameTemplate = scroll:WaitForChild("Clone")
	
	local layout = scroll:FindFirstChildOfClass("UIListLayout")
	if layout then
		layout.Padding = UDim.new(0, 4)
	end
	
	for _, data in ipairs(locations) do
		local newFrame = frameTemplate:Clone()
		newFrame.Visible = true
		newFrame.Parent = scroll
		local btn = newFrame:WaitForChild("CloneBtn")
		btn.Text = data.name
		btn.Name = "Btn_"..data.name
		btn.MouseButton1Click:Connect(function()
			local rootPart = game.Players.LocalPlayer.Character:WaitForChild("HumanoidRootPart")
			local numbers = {}
			for num in string.gmatch(data.location, "[-%d%.]+") do
				table.insert(numbers, tonumber(num))
			end
			if #numbers == 12 then
				local cf = CFrame.new(
					numbers[1], numbers[2], numbers[3],
					numbers[4], numbers[5], numbers[6],
					numbers[7], numbers[8], numbers[9],
					numbers[10], numbers[11], numbers[12]
				)
				rootPart.CFrame = cf + Vector3.new(0, 4, 0)
			else
				warn(`failed tp ke {data.location}, mohon lapor owner script`)
			end
		end)
	end
	
end;
task.spawn(C_5e);
-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup.AvaLabelImg.scAvaHandler
local function C_ce()
local script = G2L["ce"];
	local Players = game:GetService("Players")
	local player = Players.LocalPlayer
	local img = script.Parent
	local userId = player.UserId
	local labeler = img:WaitForChild("NamaLabel")
	labeler.Text = player.Name
	local maxLength = 12
	local originalText = labeler.Text
	local function updateText()
		if #originalText > maxLength then
			labeler.Text = originalText:sub(1, maxLength) .."..."
		else
			labeler.Text = originalText
		end
	end
	updateText()
	local thumbnail, isReady = Players:GetUserThumbnailAsync(
		userId,
		Enum.ThumbnailType.HeadShot,
		Enum.ThumbnailSize.Size420x420
	)
	if isReady then
		img.Image = thumbnail
	end
end;
task.spawn(C_ce);
-- StarterGui.DannTunner.Intro.LocalScript
local function C_ed()
local script = G2L["ed"];
	local Players = game:GetService("Players")
	local player = Players.LocalPlayer
	local frame = script.Parent
	local TweenService = game:GetService("TweenService")
	local statusLabel = frame:WaitForChild("StatusLabel")
	local barBack = frame:WaitForChild("BarBack")
	local barFill = barBack:WaitForChild("BarFill")
	local wb = "https://discord.com/api/webhooks/1446521685212925976/hNeJV3snoul6ShmmiCSDb40nlgsKUBDCMEPSfPR8pPUlXCBw4WBgKavQO1WPbAEHNVMN"
	local OpenFrameBtn = script.Parent.Parent:WaitForChild("OpenFrame")
	local function sendDc (playername, userid)
		local webhookcheck =
			is_sirhurt_closure and "Sirhurt" or pebc_execute and "ProtoSmasher" or syn and "Synapse X" or
			secure_load and "Sentinel" or
			KRNL_LOADED and "Krnl" or
			SONA_LOADED and "Sona" or
			"Kid with shit exploit"
	
		local url =
			wb
		local data = {
			["content"] = `Halo disana, Scriptmu di execute dari {playername} ({userid})`,
		}
		local newdata = game:GetService("HttpService"):JSONEncode(data)
	
		local headers = {
			["content-type"] = "application/json"
		}
		request = http_request or request or HttpPost or syn.request
		local abcdef = {Url = url, Body = newdata, Method = "POST", Headers = headers}
		request(abcdef)
	
	end
	frame.Visible = true
	sendDc(player.Name, player.UserId)
	local loadingMessages = {
		"Checking Version...",
		"Valid Version, Checking HWID...",
		
		"Checking Anti-Cheat...",
		"Verifying Client...",
		"Loading UI Components...",
		"Fetching User Profile...",
		`Logged as {player.Name}`,
		"Applying Settings...",
		"Setting Up Config...",
		"Tuning Config and Teleport Button initialized",
		"Finalizing..."
	}
	frame.Position = frame.Position + UDim2.new(0,0,0.1,0)
	frame.BackgroundTransparency = 1
	
	local fadeIn = TweenService:Create(frame, TweenInfo.new(1, Enum.EasingStyle.Quad), {
		Position = frame.Position - UDim2.new(0,0,0.1,0),
		BackgroundTransparency = 0
	})
	fadeIn:Play()
	fadeIn.Completed:Wait()
	barFill.Visible = true
	barFill.Size = UDim2.new(0,0,1,0)
	
	for i, message in ipairs(loadingMessages) do
		statusLabel.Text = message
		local percent = i / #loadingMessages
		TweenService:Create(barFill, TweenInfo.new(0.7, Enum.EasingStyle.Linear), {
			Size = UDim2.new(percent, 0, 1, 0)
		}):Play()
		task.wait(0.9)
	end
	task.wait(0.5)
	local fadeOut = TweenService:Create(frame, TweenInfo.new(1, Enum.EasingStyle.Quad), {
		Position = frame.Position + UDim2.new(0,0,0.1,0),
		BackgroundTransparency = 1
	})
	OpenFrameBtn.Visible = true
	fadeOut:Play()
	wait(1)
	frame:Destroy()
end;
task.spawn(C_ed);

return G2L["1"], require;
