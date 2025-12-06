--[=[
 d888b  db    db d888888b      .d888b.      db      db    db  .d8b.  
88' Y8b 88    88   `88'        VP  `8D      88      88    88 d8' `8b 
88      88    88    88            odD'      88      88    88 88ooo88 
88  ooo 88    88    88          .88'        88      88    88 88~~~88 
88. ~8~ 88b  d88   .88.        j88.         88booo. 88b  d88 88   88    @uniquadev
 Y888P  ~Y8888P' Y888888P      888888D      Y88888P ~Y8888P' YP   YP  CONVERTER 
]=]

-- Instances: 262 | Scripts: 15 | Modules: 0 | Tags: 0
local G2L = {};

-- StarterGui.DannTunner
G2L["1"] = Instance.new("ScreenGui", game:GetService("Players").LocalPlayer:WaitForChild("PlayerGui"));
G2L["1"]["Name"] = [[DannTunner]];
G2L["1"]["ZIndexBehavior"] = Enum.ZIndexBehavior.Sibling;


-- StarterGui.DannTunner.SoundHandler
G2L["2"] = Instance.new("LocalScript", G2L["1"]);
G2L["2"]["Name"] = [[SoundHandler]];


-- StarterGui.DannTunner.Open
G2L["3"] = Instance.new("Frame", G2L["1"]);
G2L["3"]["Visible"] = false;
G2L["3"]["BorderSizePixel"] = 0;
G2L["3"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["3"]["Size"] = UDim2.new(0, 480, 0, 233);
G2L["3"]["Position"] = UDim2.new(0.28181, 0, 0.23713, 0);
G2L["3"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["3"]["Name"] = [[Open]];


-- StarterGui.DannTunner.Open.drg
G2L["4"] = Instance.new("LocalScript", G2L["3"]);
G2L["4"]["Name"] = [[drg]];


-- StarterGui.DannTunner.Open.Handler
G2L["5"] = Instance.new("LocalScript", G2L["3"]);
G2L["5"]["Name"] = [[Handler]];


-- StarterGui.DannTunner.Open.UICorner
G2L["6"] = Instance.new("UICorner", G2L["3"]);



-- StarterGui.DannTunner.Open.UIGradient
G2L["7"] = Instance.new("UIGradient", G2L["3"]);
G2L["7"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll
G2L["8"] = Instance.new("Folder", G2L["3"]);
G2L["8"]["Name"] = [[FrameAll]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame
G2L["9"] = Instance.new("Frame", G2L["8"]);
G2L["9"]["Visible"] = false;
G2L["9"]["BorderSizePixel"] = 0;
G2L["9"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["9"]["Size"] = UDim2.new(0, 369, 0, 195);
G2L["9"]["Position"] = UDim2.new(0.22909, 0, 0.15377, 0);
G2L["9"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["9"]["Name"] = [[TuningFrame]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.UIStroke
G2L["a"] = Instance.new("UIStroke", G2L["9"]);
G2L["a"]["Thickness"] = 2;
G2L["a"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.UIGradient
G2L["b"] = Instance.new("UIGradient", G2L["9"]);
G2L["b"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.UICorner
G2L["c"] = Instance.new("UICorner", G2L["9"]);



-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger
G2L["d"] = Instance.new("Frame", G2L["9"]);
G2L["d"]["BorderSizePixel"] = 0;
G2L["d"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["d"]["Size"] = UDim2.new(0, 256, 0, 29);
G2L["d"]["Position"] = UDim2.new(0.30352, 0, 0.00513, 0);
G2L["d"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["d"]["Name"] = [[TurboCharger]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.UIStroke
G2L["e"] = Instance.new("UIStroke", G2L["d"]);
G2L["e"]["Thickness"] = 2;
G2L["e"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.UIGradient
G2L["f"] = Instance.new("UIGradient", G2L["d"]);
G2L["f"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.UICorner
G2L["10"] = Instance.new("UICorner", G2L["d"]);



-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.IgnoreThis
G2L["11"] = Instance.new("ImageLabel", G2L["d"]);
G2L["11"]["BorderSizePixel"] = 0;
G2L["11"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["11"]["Image"] = [[rbxassetid://111585227131277]];
G2L["11"]["Size"] = UDim2.new(0, 39, 0, 28);
G2L["11"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["11"]["BackgroundTransparency"] = 1;
G2L["11"]["Name"] = [[IgnoreThis]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TextLabel
G2L["12"] = Instance.new("TextLabel", G2L["d"]);
G2L["12"]["BorderSizePixel"] = 0;
G2L["12"]["TextSize"] = 17;
G2L["12"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["12"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["12"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["12"]["BackgroundTransparency"] = 1;
G2L["12"]["Size"] = UDim2.new(0, 143, 0, 29);
G2L["12"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["12"]["Text"] = [[TurboCharger]];
G2L["12"]["Position"] = UDim2.new(-0.51837, 0, 0, 0);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TextLabel
G2L["13"] = Instance.new("TextLabel", G2L["d"]);
G2L["13"]["BorderSizePixel"] = 0;
G2L["13"]["TextSize"] = 17;
G2L["13"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["13"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["13"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["13"]["BackgroundTransparency"] = 1;
G2L["13"]["Size"] = UDim2.new(0, 143, 0, 29);
G2L["13"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["13"]["Text"] = [[SuperCharger]];
G2L["13"]["Position"] = UDim2.new(-0.51837, 0, 1.24138, 0);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TextLabel
G2L["14"] = Instance.new("TextLabel", G2L["d"]);
G2L["14"]["BorderSizePixel"] = 0;
G2L["14"]["TextSize"] = 17;
G2L["14"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["14"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["14"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["14"]["BackgroundTransparency"] = 1;
G2L["14"]["Size"] = UDim2.new(0, 143, 0, 29);
G2L["14"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["14"]["Text"] = [[Horse Power]];
G2L["14"]["Position"] = UDim2.new(-0.51837, 0, 2.48276, 0);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerAmount
G2L["15"] = Instance.new("TextBox", G2L["d"]);
G2L["15"]["Name"] = [[TurboChargerAmount]];
G2L["15"]["BorderSizePixel"] = 0;
G2L["15"]["TextSize"] = 14;
G2L["15"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["15"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["15"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["15"]["Size"] = UDim2.new(0, 54, 0, 29);
G2L["15"]["Position"] = UDim2.new(0.35043, 0, 0, 0);
G2L["15"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["15"]["Text"] = [[]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerAmount.nn
G2L["16"] = Instance.new("LocalScript", G2L["15"]);
G2L["16"]["Name"] = [[nn]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerAmount.UIGradient
G2L["17"] = Instance.new("UIGradient", G2L["15"]);
G2L["17"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(90, 90, 90)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(90, 90, 90))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerAmount.UICorner
G2L["18"] = Instance.new("UICorner", G2L["15"]);
G2L["18"]["CornerRadius"] = UDim.new(0, 3);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboAmount
G2L["19"] = Instance.new("TextLabel", G2L["d"]);
G2L["19"]["TextWrapped"] = true;
G2L["19"]["TextSize"] = 17;
G2L["19"]["TextScaled"] = true;
G2L["19"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["19"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["19"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["19"]["BackgroundTransparency"] = 1;
G2L["19"]["Size"] = UDim2.new(0, 46, 0, 29);
G2L["19"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["19"]["Text"] = [[Amount]];
G2L["19"]["Name"] = [[TurboAmount]];
G2L["19"]["Position"] = UDim2.new(0.1499, 0, 0, 0);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboBoost
G2L["1a"] = Instance.new("TextLabel", G2L["d"]);
G2L["1a"]["TextSize"] = 17;
G2L["1a"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["1a"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["1a"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["1a"]["BackgroundTransparency"] = 1;
G2L["1a"]["Size"] = UDim2.new(0, 46, 0, 29);
G2L["1a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["1a"]["Text"] = [[Boost]];
G2L["1a"]["Name"] = [[TurboBoost]];
G2L["1a"]["Position"] = UDim2.new(0.56054, 0, -0.03448, 0);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerBoost
G2L["1b"] = Instance.new("TextBox", G2L["d"]);
G2L["1b"]["Name"] = [[TurboChargerBoost]];
G2L["1b"]["BorderSizePixel"] = 0;
G2L["1b"]["TextSize"] = 14;
G2L["1b"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["1b"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["1b"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["1b"]["Size"] = UDim2.new(0, 54, 0, 29);
G2L["1b"]["Position"] = UDim2.new(0.75326, 0, -0.03448, 0);
G2L["1b"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["1b"]["Text"] = [[]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerBoost.nn
G2L["1c"] = Instance.new("LocalScript", G2L["1b"]);
G2L["1c"]["Name"] = [[nn]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerBoost.UIGradient
G2L["1d"] = Instance.new("UIGradient", G2L["1b"]);
G2L["1d"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(90, 90, 90)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(90, 90, 90))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerBoost.UICorner
G2L["1e"] = Instance.new("UICorner", G2L["1b"]);
G2L["1e"]["CornerRadius"] = UDim.new(0, 3);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger
G2L["1f"] = Instance.new("Frame", G2L["9"]);
G2L["1f"]["BorderSizePixel"] = 0;
G2L["1f"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["1f"]["Size"] = UDim2.new(0, 256, 0, 29);
G2L["1f"]["Position"] = UDim2.new(0.30352, 0, 0.18974, 0);
G2L["1f"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["1f"]["Name"] = [[SuperCharger]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.UIStroke
G2L["20"] = Instance.new("UIStroke", G2L["1f"]);
G2L["20"]["Thickness"] = 2;
G2L["20"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.UIGradient
G2L["21"] = Instance.new("UIGradient", G2L["1f"]);
G2L["21"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.UICorner
G2L["22"] = Instance.new("UICorner", G2L["1f"]);



-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.IgnoreThis
G2L["23"] = Instance.new("ImageLabel", G2L["1f"]);
G2L["23"]["BorderSizePixel"] = 0;
G2L["23"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["23"]["Image"] = [[rbxassetid://95774500893219]];
G2L["23"]["Size"] = UDim2.new(0, 39, 0, 28);
G2L["23"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["23"]["BackgroundTransparency"] = 1;
G2L["23"]["Name"] = [[IgnoreThis]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperBoost
G2L["24"] = Instance.new("TextLabel", G2L["1f"]);
G2L["24"]["TextSize"] = 17;
G2L["24"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["24"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["24"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["24"]["BackgroundTransparency"] = 1;
G2L["24"]["Size"] = UDim2.new(0, 46, 0, 29);
G2L["24"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["24"]["Text"] = [[Boost]];
G2L["24"]["Name"] = [[SuperBoost]];
G2L["24"]["Position"] = UDim2.new(0.56054, 0, -0.03448, 0);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperAmount
G2L["25"] = Instance.new("TextLabel", G2L["1f"]);
G2L["25"]["TextWrapped"] = true;
G2L["25"]["TextSize"] = 17;
G2L["25"]["TextScaled"] = true;
G2L["25"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["25"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["25"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["25"]["BackgroundTransparency"] = 1;
G2L["25"]["Size"] = UDim2.new(0, 46, 0, 29);
G2L["25"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["25"]["Text"] = [[Amount]];
G2L["25"]["Name"] = [[SuperAmount]];
G2L["25"]["Position"] = UDim2.new(0.1499, 0, 0, 0);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerAmount
G2L["26"] = Instance.new("TextBox", G2L["1f"]);
G2L["26"]["Name"] = [[SuperChargerAmount]];
G2L["26"]["BorderSizePixel"] = 0;
G2L["26"]["TextSize"] = 14;
G2L["26"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["26"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["26"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["26"]["Size"] = UDim2.new(0, 54, 0, 29);
G2L["26"]["Position"] = UDim2.new(0.35043, 0, 0, 0);
G2L["26"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["26"]["Text"] = [[]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerAmount.nn
G2L["27"] = Instance.new("LocalScript", G2L["26"]);
G2L["27"]["Name"] = [[nn]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerAmount.UIGradient
G2L["28"] = Instance.new("UIGradient", G2L["26"]);
G2L["28"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(90, 90, 90)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(90, 90, 90))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerAmount.UICorner
G2L["29"] = Instance.new("UICorner", G2L["26"]);
G2L["29"]["CornerRadius"] = UDim.new(0, 3);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerBoost
G2L["2a"] = Instance.new("TextBox", G2L["1f"]);
G2L["2a"]["Name"] = [[SuperChargerBoost]];
G2L["2a"]["BorderSizePixel"] = 0;
G2L["2a"]["TextSize"] = 14;
G2L["2a"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["2a"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["2a"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["2a"]["Size"] = UDim2.new(0, 54, 0, 29);
G2L["2a"]["Position"] = UDim2.new(0.75326, 0, -0.03448, 0);
G2L["2a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["2a"]["Text"] = [[]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerBoost.nn
G2L["2b"] = Instance.new("LocalScript", G2L["2a"]);
G2L["2b"]["Name"] = [[nn]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerBoost.UIGradient
G2L["2c"] = Instance.new("UIGradient", G2L["2a"]);
G2L["2c"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(90, 90, 90)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(90, 90, 90))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerBoost.UICorner
G2L["2d"] = Instance.new("UICorner", G2L["2a"]);
G2L["2d"]["CornerRadius"] = UDim.new(0, 3);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.HorsePower
G2L["2e"] = Instance.new("Frame", G2L["9"]);
G2L["2e"]["BorderSizePixel"] = 0;
G2L["2e"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["2e"]["Size"] = UDim2.new(0, 54, 0, 29);
G2L["2e"]["Position"] = UDim2.new(0.30352, 0, 0.37436, 0);
G2L["2e"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["2e"]["Name"] = [[HorsePower]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.HorsePower.UIStroke
G2L["2f"] = Instance.new("UIStroke", G2L["2e"]);
G2L["2f"]["Thickness"] = 2;
G2L["2f"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.HorsePower.UIGradient
G2L["30"] = Instance.new("UIGradient", G2L["2e"]);
G2L["30"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.HorsePower.UICorner
G2L["31"] = Instance.new("UICorner", G2L["2e"]);
G2L["31"]["CornerRadius"] = UDim.new(0, 2);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.HorsePower.HP
G2L["32"] = Instance.new("TextBox", G2L["2e"]);
G2L["32"]["Name"] = [[HP]];
G2L["32"]["BorderSizePixel"] = 0;
G2L["32"]["TextSize"] = 14;
G2L["32"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["32"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["32"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["32"]["Size"] = UDim2.new(0, 54, 0, 29);
G2L["32"]["Position"] = UDim2.new(-0.00894, 0, 0, 0);
G2L["32"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["32"]["Text"] = [[]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.HorsePower.HP.nn
G2L["33"] = Instance.new("LocalScript", G2L["32"]);
G2L["33"]["Name"] = [[nn]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.HorsePower.HP.UIGradient
G2L["34"] = Instance.new("UIGradient", G2L["32"]);
G2L["34"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(90, 90, 90)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(90, 90, 90))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.HorsePower.HP.UICorner
G2L["35"] = Instance.new("UICorner", G2L["32"]);
G2L["35"]["CornerRadius"] = UDim.new(0, 3);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame
G2L["36"] = Instance.new("Frame", G2L["9"]);
G2L["36"]["BorderSizePixel"] = 0;
G2L["36"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["36"]["Size"] = UDim2.new(0, 108, 0, 62);
G2L["36"]["Position"] = UDim2.new(0.56911, 0, 0.45217, 0);
G2L["36"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["36"]["Name"] = [[TunnerFrame]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame.UIStroke
G2L["37"] = Instance.new("UIStroke", G2L["36"]);
G2L["37"]["Thickness"] = 2;
G2L["37"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame.UIGradient
G2L["38"] = Instance.new("UIGradient", G2L["36"]);
G2L["38"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame.UICorner
G2L["39"] = Instance.new("UICorner", G2L["36"]);



-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame.TunnerButton
G2L["3a"] = Instance.new("Frame", G2L["36"]);
G2L["3a"]["BorderSizePixel"] = 0;
G2L["3a"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["3a"]["Size"] = UDim2.new(0, 107, 0, 30);
G2L["3a"]["Position"] = UDim2.new(0, 0, -0.00188, 0);
G2L["3a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["3a"]["Name"] = [[TunnerButton]];


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame.TunnerButton.TunnerButtonBtn
G2L["3b"] = Instance.new("TextButton", G2L["3a"]);
G2L["3b"]["BorderSizePixel"] = 0;
G2L["3b"]["TextSize"] = 20;
G2L["3b"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["3b"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["3b"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["3b"]["BackgroundTransparency"] = 1;
G2L["3b"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["3b"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["3b"]["Text"] = [[Tune...!]];
G2L["3b"]["Name"] = [[TunnerButtonBtn]];
G2L["3b"]["Position"] = UDim2.new(0.04673, 0, -0.01362, 0);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame.TunnerButton.TunnerButtonBtn.UIGradient
G2L["3c"] = Instance.new("UIGradient", G2L["3b"]);



-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame.TunnerButton.UIStroke
G2L["3d"] = Instance.new("UIStroke", G2L["3a"]);
G2L["3d"]["Thickness"] = 2;
G2L["3d"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame.TunnerButton.UIGradient
G2L["3e"] = Instance.new("UIGradient", G2L["3a"]);
G2L["3e"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TunnerFrame.TunnerButton.UICorner
G2L["3f"] = Instance.new("UICorner", G2L["3a"]);



-- StarterGui.DannTunner.Open.FrameAll.LoadingFrame
G2L["40"] = Instance.new("Frame", G2L["8"]);
G2L["40"]["BorderSizePixel"] = 0;
G2L["40"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["40"]["Size"] = UDim2.new(0, 369, 0, 195);
G2L["40"]["Position"] = UDim2.new(0.22909, 0, 0.15377, 0);
G2L["40"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["40"]["Name"] = [[LoadingFrame]];


-- StarterGui.DannTunner.Open.FrameAll.LoadingFrame.UIStroke
G2L["41"] = Instance.new("UIStroke", G2L["40"]);
G2L["41"]["Thickness"] = 2;
G2L["41"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.LoadingFrame.UIGradient
G2L["42"] = Instance.new("UIGradient", G2L["40"]);
G2L["42"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.LoadingFrame.UICorner
G2L["43"] = Instance.new("UICorner", G2L["40"]);



-- StarterGui.DannTunner.Open.FrameAll.LoadingFrame.Grattering
G2L["44"] = Instance.new("TextLabel", G2L["40"]);
G2L["44"]["TextWrapped"] = true;
G2L["44"]["BorderSizePixel"] = 0;
G2L["44"]["TextSize"] = 17;
G2L["44"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["44"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["44"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["44"]["BackgroundTransparency"] = 1;
G2L["44"]["Size"] = UDim2.new(0, 226, 0, 50);
G2L["44"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["44"]["Text"] = [[]];
G2L["44"]["Name"] = [[Grattering]];
G2L["44"]["Position"] = UDim2.new(0, 0, 0.0359, 0);


-- StarterGui.DannTunner.Open.FrameAll.LoadingFrame.Grattering.Grthndl
G2L["45"] = Instance.new("LocalScript", G2L["44"]);
G2L["45"]["Name"] = [[Grthndl]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame
G2L["46"] = Instance.new("Frame", G2L["8"]);
G2L["46"]["Visible"] = false;
G2L["46"]["BorderSizePixel"] = 0;
G2L["46"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["46"]["Size"] = UDim2.new(0, 369, 0, 195);
G2L["46"]["Position"] = UDim2.new(0.22909, 0, 0.15377, 0);
G2L["46"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["46"]["Name"] = [[MiscFrame]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.UIStroke
G2L["47"] = Instance.new("UIStroke", G2L["46"]);
G2L["47"]["Thickness"] = 2;
G2L["47"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.UIGradient
G2L["48"] = Instance.new("UIGradient", G2L["46"]);
G2L["48"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.UICorner
G2L["49"] = Instance.new("UICorner", G2L["46"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin
G2L["4a"] = Instance.new("Frame", G2L["46"]);
G2L["4a"]["BorderSizePixel"] = 0;
G2L["4a"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["4a"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["4a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["4a"]["Name"] = [[Rejoin]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.UIStroke
G2L["4b"] = Instance.new("UIStroke", G2L["4a"]);
G2L["4b"]["Thickness"] = 2;
G2L["4b"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.UIGradient
G2L["4c"] = Instance.new("UIGradient", G2L["4a"]);
G2L["4c"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.UICorner
G2L["4d"] = Instance.new("UICorner", G2L["4a"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Confirm
G2L["4e"] = Instance.new("Frame", G2L["4a"]);
G2L["4e"]["Visible"] = false;
G2L["4e"]["BorderSizePixel"] = 0;
G2L["4e"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["4e"]["Size"] = UDim2.new(0, 178, 0, 153);
G2L["4e"]["Position"] = UDim2.new(1.39806, 0, 0.48276, 0);
G2L["4e"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["4e"]["Name"] = [[Confirm]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Confirm.UIStroke
G2L["4f"] = Instance.new("UIStroke", G2L["4e"]);
G2L["4f"]["Thickness"] = 2;
G2L["4f"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Confirm.UIGradient
G2L["50"] = Instance.new("UIGradient", G2L["4e"]);
G2L["50"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Confirm.UICorner
G2L["51"] = Instance.new("UICorner", G2L["4e"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Confirm.No
G2L["52"] = Instance.new("Frame", G2L["4e"]);
G2L["52"]["BorderSizePixel"] = 0;
G2L["52"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["52"]["Size"] = UDim2.new(0, 73, 0, 22);
G2L["52"]["Position"] = UDim2.new(0.07783, 0, 0.70498, 0);
G2L["52"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["52"]["Name"] = [[No]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Confirm.No.UIStroke
G2L["53"] = Instance.new("UIStroke", G2L["52"]);
G2L["53"]["Thickness"] = 2;
G2L["53"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Confirm.No.UIGradient
G2L["54"] = Instance.new("UIGradient", G2L["52"]);
G2L["54"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(255, 9, 13)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(255, 9, 13))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Confirm.No.UICorner
G2L["55"] = Instance.new("UICorner", G2L["52"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Confirm.No.NoBtn
G2L["56"] = Instance.new("TextButton", G2L["52"]);
G2L["56"]["TextWrapped"] = true;
G2L["56"]["BorderSizePixel"] = 0;
G2L["56"]["TextSize"] = 20;
G2L["56"]["TextScaled"] = true;
G2L["56"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["56"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["56"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["56"]["BackgroundTransparency"] = 1;
G2L["56"]["Size"] = UDim2.new(0, 71, 0, 20);
G2L["56"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["56"]["Text"] = [[No]];
G2L["56"]["Name"] = [[NoBtn]];
G2L["56"]["Position"] = UDim2.new(0.03655, 0, 0.03856, 0);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Confirm.No.NoBtn.UIGradient
G2L["57"] = Instance.new("UIGradient", G2L["56"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Confirm.Yes
G2L["58"] = Instance.new("Frame", G2L["4e"]);
G2L["58"]["BorderSizePixel"] = 0;
G2L["58"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["58"]["Size"] = UDim2.new(0, 73, 0, 22);
G2L["58"]["Position"] = UDim2.new(0.53851, 0, 0.70498, 0);
G2L["58"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["58"]["Name"] = [[Yes]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Confirm.Yes.UIStroke
G2L["59"] = Instance.new("UIStroke", G2L["58"]);
G2L["59"]["Thickness"] = 2;
G2L["59"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Confirm.Yes.UIGradient
G2L["5a"] = Instance.new("UIGradient", G2L["58"]);
G2L["5a"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(28, 255, 12)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(28, 255, 12))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Confirm.Yes.UICorner
G2L["5b"] = Instance.new("UICorner", G2L["58"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Confirm.Yes.YesBtn
G2L["5c"] = Instance.new("TextButton", G2L["58"]);
G2L["5c"]["TextWrapped"] = true;
G2L["5c"]["BorderSizePixel"] = 0;
G2L["5c"]["TextSize"] = 20;
G2L["5c"]["TextScaled"] = true;
G2L["5c"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["5c"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["5c"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["5c"]["BackgroundTransparency"] = 1;
G2L["5c"]["Size"] = UDim2.new(0, 71, 0, 20);
G2L["5c"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["5c"]["Text"] = [[Yes]];
G2L["5c"]["Name"] = [[YesBtn]];
G2L["5c"]["Position"] = UDim2.new(0.03655, 0, 0.03856, 0);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Confirm.Yes.YesBtn.UIGradient
G2L["5d"] = Instance.new("UIGradient", G2L["5c"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Confirm.Tulisan tengah
G2L["5e"] = Instance.new("TextLabel", G2L["4e"]);
G2L["5e"]["TextWrapped"] = true;
G2L["5e"]["BorderSizePixel"] = 0;
G2L["5e"]["TextSize"] = 14;
G2L["5e"]["TextScaled"] = true;
G2L["5e"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["5e"]["FontFace"] = Font.new([[rbxasset://fonts/families/FredokaOne.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["5e"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["5e"]["BackgroundTransparency"] = 1;
G2L["5e"]["Size"] = UDim2.new(0, 164, 0, 53);
G2L["5e"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["5e"]["Text"] = [[Apakah mau Rejoin Server?]];
G2L["5e"]["Name"] = [[Tulisan tengah]];
G2L["5e"]["Position"] = UDim2.new(0.03539, 0, 0.14695, 0);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Rejoin Server
G2L["5f"] = Instance.new("TextButton", G2L["4a"]);
G2L["5f"]["TextWrapped"] = true;
G2L["5f"]["BorderSizePixel"] = 0;
G2L["5f"]["TextSize"] = 20;
G2L["5f"]["TextScaled"] = true;
G2L["5f"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["5f"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["5f"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["5f"]["BackgroundTransparency"] = 1;
G2L["5f"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["5f"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["5f"]["Text"] = [[Rejoin Server]];
G2L["5f"]["Name"] = [[Rejoin Server]];
G2L["5f"]["Position"] = UDim2.new(-0.00055, 0, -0.0069, 0);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Rejoin.Rejoin Server.UIGradient
G2L["60"] = Instance.new("UIGradient", G2L["5f"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport
G2L["61"] = Instance.new("Frame", G2L["46"]);
G2L["61"]["BorderSizePixel"] = 0;
G2L["61"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["61"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["61"]["Position"] = UDim2.new(0, 0, 0.18974, 0);
G2L["61"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["61"]["Name"] = [[Teleport]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.UIStroke
G2L["62"] = Instance.new("UIStroke", G2L["61"]);
G2L["62"]["Thickness"] = 2;
G2L["62"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.UIGradient
G2L["63"] = Instance.new("UIGradient", G2L["61"]);
G2L["63"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.UICorner
G2L["64"] = Instance.new("UICorner", G2L["61"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportBtn
G2L["65"] = Instance.new("TextButton", G2L["61"]);
G2L["65"]["TextWrapped"] = true;
G2L["65"]["BorderSizePixel"] = 0;
G2L["65"]["TextSize"] = 20;
G2L["65"]["TextScaled"] = true;
G2L["65"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["65"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["65"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["65"]["BackgroundTransparency"] = 1;
G2L["65"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["65"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["65"]["Text"] = [[Teleport]];
G2L["65"]["Name"] = [[TeleportBtn]];
G2L["65"]["Position"] = UDim2.new(-0.00055, 0, -0.0069, 0);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportBtn.UIGradient
G2L["66"] = Instance.new("UIGradient", G2L["65"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList
G2L["67"] = Instance.new("Frame", G2L["61"]);
G2L["67"]["Visible"] = false;
G2L["67"]["BorderSizePixel"] = 0;
G2L["67"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["67"]["Size"] = UDim2.new(0, 164, 0, 195);
G2L["67"]["Position"] = UDim2.new(1.99029, 0, -1.27586, 0);
G2L["67"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["67"]["Name"] = [[TeleportList]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.TeleportHandler
G2L["68"] = Instance.new("LocalScript", G2L["67"]);
G2L["68"]["Name"] = [[TeleportHandler]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.UIGradient
G2L["69"] = Instance.new("UIGradient", G2L["67"]);
G2L["69"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.UICorner
G2L["6a"] = Instance.new("UICorner", G2L["67"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.UIStroke
G2L["6b"] = Instance.new("UIStroke", G2L["67"]);
G2L["6b"]["Thickness"] = 2;
G2L["6b"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.ScrollingFrame
G2L["6c"] = Instance.new("ScrollingFrame", G2L["67"]);
G2L["6c"]["Active"] = true;
G2L["6c"]["BorderSizePixel"] = 0;
G2L["6c"]["BackgroundColor3"] = Color3.fromRGB(53, 53, 53);
G2L["6c"]["Size"] = UDim2.new(0, 164, 0, 194);
G2L["6c"]["Position"] = UDim2.new(0, 0, 0.00256, 0);
G2L["6c"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["6c"]["BackgroundTransparency"] = 1;


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.ScrollingFrame.UIListLayout
G2L["6d"] = Instance.new("UIListLayout", G2L["6c"]);
G2L["6d"]["SortOrder"] = Enum.SortOrder.LayoutOrder;


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.ScrollingFrame.Clone
G2L["6e"] = Instance.new("Frame", G2L["6c"]);
G2L["6e"]["Visible"] = false;
G2L["6e"]["BorderSizePixel"] = 0;
G2L["6e"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["6e"]["Size"] = UDim2.new(0, 164, 0, 29);
G2L["6e"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["6e"]["Name"] = [[Clone]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.ScrollingFrame.Clone.UIStroke
G2L["6f"] = Instance.new("UIStroke", G2L["6e"]);
G2L["6f"]["Thickness"] = 2;
G2L["6f"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.ScrollingFrame.Clone.UIGradient
G2L["70"] = Instance.new("UIGradient", G2L["6e"]);
G2L["70"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.ScrollingFrame.Clone.UICorner
G2L["71"] = Instance.new("UICorner", G2L["6e"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.ScrollingFrame.Clone.CloneBtn
G2L["72"] = Instance.new("TextButton", G2L["6e"]);
G2L["72"]["TextWrapped"] = true;
G2L["72"]["BorderSizePixel"] = 0;
G2L["72"]["TextSize"] = 20;
G2L["72"]["TextScaled"] = true;
G2L["72"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["72"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["72"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["72"]["BackgroundTransparency"] = 1;
G2L["72"]["Size"] = UDim2.new(0, 154, 0, 29);
G2L["72"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["72"]["Text"] = [[]];
G2L["72"]["Name"] = [[CloneBtn]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.ScrollingFrame.Clone.CloneBtn.UIGradient
G2L["73"] = Instance.new("UIGradient", G2L["72"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.DragTimer
G2L["74"] = Instance.new("Frame", G2L["46"]);
G2L["74"]["BorderSizePixel"] = 0;
G2L["74"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["74"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["74"]["Position"] = UDim2.new(0.00271, 0, 0.37436, 0);
G2L["74"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["74"]["Name"] = [[DragTimer]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.DragTimer.UIStroke
G2L["75"] = Instance.new("UIStroke", G2L["74"]);
G2L["75"]["Thickness"] = 2;
G2L["75"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.DragTimer.UIGradient
G2L["76"] = Instance.new("UIGradient", G2L["74"]);
G2L["76"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.DragTimer.UICorner
G2L["77"] = Instance.new("UICorner", G2L["74"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.DragTimer.DragTimerBtn
G2L["78"] = Instance.new("TextButton", G2L["74"]);
G2L["78"]["TextWrapped"] = true;
G2L["78"]["BorderSizePixel"] = 0;
G2L["78"]["TextSize"] = 20;
G2L["78"]["TextScaled"] = true;
G2L["78"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["78"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["78"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["78"]["BackgroundTransparency"] = 1;
G2L["78"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["78"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["78"]["Text"] = [[Drag Timer]];
G2L["78"]["Name"] = [[DragTimerBtn]];
G2L["78"]["Position"] = UDim2.new(-0.00055, 0, -0.0069, 0);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.DragTimer.DragTimerBtn.UIGradient
G2L["79"] = Instance.new("UIGradient", G2L["78"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial
G2L["7a"] = Instance.new("Frame", G2L["46"]);
G2L["7a"]["BorderSizePixel"] = 0;
G2L["7a"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["7a"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["7a"]["Position"] = UDim2.new(0.00271, 0, 0.55897, 0);
G2L["7a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["7a"]["Name"] = [[TimeTrial]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.UIStroke
G2L["7b"] = Instance.new("UIStroke", G2L["7a"]);
G2L["7b"]["Thickness"] = 2;
G2L["7b"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.UIGradient
G2L["7c"] = Instance.new("UIGradient", G2L["7a"]);
G2L["7c"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.UICorner
G2L["7d"] = Instance.new("UICorner", G2L["7a"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialBtn
G2L["7e"] = Instance.new("TextButton", G2L["7a"]);
G2L["7e"]["TextWrapped"] = true;
G2L["7e"]["BorderSizePixel"] = 0;
G2L["7e"]["TextSize"] = 20;
G2L["7e"]["TextScaled"] = true;
G2L["7e"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["7e"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["7e"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["7e"]["BackgroundTransparency"] = 1;
G2L["7e"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["7e"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["7e"]["Text"] = [[Time Trial]];
G2L["7e"]["Name"] = [[TimeTrialBtn]];
G2L["7e"]["Position"] = UDim2.new(-0.00055, 0, -0.04138, 0);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialBtn.UIGradient
G2L["7f"] = Instance.new("UIGradient", G2L["7e"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame
G2L["80"] = Instance.new("Frame", G2L["7a"]);
G2L["80"]["Visible"] = false;
G2L["80"]["BorderSizePixel"] = 0;
G2L["80"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["80"]["Size"] = UDim2.new(0, 172, 0, 194);
G2L["80"]["Position"] = UDim2.new(1.90291, 0, -3.72414, 0);
G2L["80"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["80"]["Name"] = [[TimeTrialFrame]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.UICorner
G2L["81"] = Instance.new("UICorner", G2L["80"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.UIStroke
G2L["82"] = Instance.new("UIStroke", G2L["80"]);
G2L["82"]["Thickness"] = 2;
G2L["82"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.UIGradient
G2L["83"] = Instance.new("UIGradient", G2L["80"]);
G2L["83"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.StartTime
G2L["84"] = Instance.new("Frame", G2L["80"]);
G2L["84"]["BorderSizePixel"] = 0;
G2L["84"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["84"]["Size"] = UDim2.new(0, 100, 0, 29);
G2L["84"]["Position"] = UDim2.new(0.20349, 0, 0.18557, 0);
G2L["84"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["84"]["Name"] = [[StartTime]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.StartTime.UIStroke
G2L["85"] = Instance.new("UIStroke", G2L["84"]);
G2L["85"]["Thickness"] = 2;
G2L["85"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.StartTime.UIGradient
G2L["86"] = Instance.new("UIGradient", G2L["84"]);
G2L["86"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.StartTime.UICorner
G2L["87"] = Instance.new("UICorner", G2L["84"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.StartTime.StartTimeTrial
G2L["88"] = Instance.new("TextButton", G2L["84"]);
G2L["88"]["TextWrapped"] = true;
G2L["88"]["BorderSizePixel"] = 0;
G2L["88"]["TextSize"] = 20;
G2L["88"]["TextScaled"] = true;
G2L["88"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["88"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["88"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["88"]["BackgroundTransparency"] = 1;
G2L["88"]["Size"] = UDim2.new(0, 100, 0, 29);
G2L["88"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["88"]["Text"] = [[Start Time Trial]];
G2L["88"]["Name"] = [[StartTimeTrial]];
G2L["88"]["Position"] = UDim2.new(-0.00288, 0, -0.0117, 0);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.StartTime.StartTimeTrial.UIGradient
G2L["89"] = Instance.new("UIGradient", G2L["88"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.TeleportTimeTrial
G2L["8a"] = Instance.new("Frame", G2L["80"]);
G2L["8a"]["BorderSizePixel"] = 0;
G2L["8a"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["8a"]["Size"] = UDim2.new(0, 100, 0, 29);
G2L["8a"]["Position"] = UDim2.new(0.19767, 0, 0.54639, 0);
G2L["8a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["8a"]["Name"] = [[TeleportTimeTrial]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.TeleportTimeTrial.UIStroke
G2L["8b"] = Instance.new("UIStroke", G2L["8a"]);
G2L["8b"]["Thickness"] = 2;
G2L["8b"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.TeleportTimeTrial.UIGradient
G2L["8c"] = Instance.new("UIGradient", G2L["8a"]);
G2L["8c"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.TeleportTimeTrial.UICorner
G2L["8d"] = Instance.new("UICorner", G2L["8a"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.TeleportTimeTrial.TeleportTimeTrials
G2L["8e"] = Instance.new("TextButton", G2L["8a"]);
G2L["8e"]["TextWrapped"] = true;
G2L["8e"]["BorderSizePixel"] = 0;
G2L["8e"]["TextSize"] = 20;
G2L["8e"]["TextScaled"] = true;
G2L["8e"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["8e"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["8e"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["8e"]["BackgroundTransparency"] = 1;
G2L["8e"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["8e"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["8e"]["Text"] = [[Teleport ke Time Trial Sentul]];
G2L["8e"]["Name"] = [[TeleportTimeTrials]];
G2L["8e"]["Position"] = UDim2.new(0.00061, 0, -0.00814, 0);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.TeleportTimeTrial.TeleportTimeTrials.UIGradient
G2L["8f"] = Instance.new("UIGradient", G2L["8e"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.NotifTimeTrial
G2L["90"] = Instance.new("Frame", G2L["80"]);
G2L["90"]["Visible"] = false;
G2L["90"]["BorderSizePixel"] = 0;
G2L["90"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["90"]["Size"] = UDim2.new(0, 100, 0, 100);
G2L["90"]["Position"] = UDim2.new(0.20349, 0, 0.19072, 0);
G2L["90"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["90"]["Name"] = [[NotifTimeTrial]];


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.NotifTimeTrial.UIStroke
G2L["91"] = Instance.new("UIStroke", G2L["90"]);
G2L["91"]["Thickness"] = 2;
G2L["91"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.NotifTimeTrial.UIGradient
G2L["92"] = Instance.new("UIGradient", G2L["90"]);
G2L["92"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.NotifTimeTrial.UICorner
G2L["93"] = Instance.new("UICorner", G2L["90"]);



-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.TimeTrial.TimeTrialFrame.NotifTimeTrial.CP
G2L["94"] = Instance.new("TextLabel", G2L["90"]);
G2L["94"]["TextWrapped"] = true;
G2L["94"]["BorderSizePixel"] = 0;
G2L["94"]["TextSize"] = 20;
G2L["94"]["TextScaled"] = true;
G2L["94"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["94"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["94"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["94"]["BackgroundTransparency"] = 1;
G2L["94"]["Size"] = UDim2.new(0, 100, 0, 98);
G2L["94"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["94"]["Text"] = [[]];
G2L["94"]["Name"] = [[CP]];


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame
G2L["95"] = Instance.new("Frame", G2L["8"]);
G2L["95"]["Visible"] = false;
G2L["95"]["BorderSizePixel"] = 0;
G2L["95"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["95"]["Size"] = UDim2.new(0, 369, 0, 195);
G2L["95"]["Position"] = UDim2.new(0.22909, 0, 0.15377, 0);
G2L["95"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["95"]["Name"] = [[ConfigFrame]];


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.UIStroke
G2L["96"] = Instance.new("UIStroke", G2L["95"]);
G2L["96"]["Thickness"] = 2;
G2L["96"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.UIGradient
G2L["97"] = Instance.new("UIGradient", G2L["95"]);
G2L["97"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.UICorner
G2L["98"] = Instance.new("UICorner", G2L["95"]);



-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Save Tuning
G2L["99"] = Instance.new("Frame", G2L["95"]);
G2L["99"]["BorderSizePixel"] = 0;
G2L["99"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["99"]["Size"] = UDim2.new(0, 104, 0, 36);
G2L["99"]["Position"] = UDim2.new(0.04607, 0, 0.55897, 0);
G2L["99"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["99"]["Name"] = [[Save Tuning]];


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Save Tuning.UIStroke
G2L["9a"] = Instance.new("UIStroke", G2L["99"]);
G2L["9a"]["Thickness"] = 2;
G2L["9a"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Save Tuning.UIGradient
G2L["9b"] = Instance.new("UIGradient", G2L["99"]);
G2L["9b"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Save Tuning.UICorner
G2L["9c"] = Instance.new("UICorner", G2L["99"]);



-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Save Tuning.SaveTuningBtn
G2L["9d"] = Instance.new("TextButton", G2L["99"]);
G2L["9d"]["TextWrapped"] = true;
G2L["9d"]["BorderSizePixel"] = 0;
G2L["9d"]["TextSize"] = 20;
G2L["9d"]["TextScaled"] = true;
G2L["9d"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["9d"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["9d"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["9d"]["BackgroundTransparency"] = 1;
G2L["9d"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["9d"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["9d"]["Text"] = [[Save Tuning]];
G2L["9d"]["Name"] = [[SaveTuningBtn]];
G2L["9d"]["Position"] = UDim2.new(0.00106, 0, 0.07401, 0);


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Save Tuning.SaveTuningBtn.UIGradient
G2L["9e"] = Instance.new("UIGradient", G2L["9d"]);



-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Delete Tuning
G2L["9f"] = Instance.new("Frame", G2L["95"]);
G2L["9f"]["BorderSizePixel"] = 0;
G2L["9f"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["9f"]["Size"] = UDim2.new(0, 104, 0, 36);
G2L["9f"]["Position"] = UDim2.new(0.04607, 0, 0.78462, 0);
G2L["9f"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["9f"]["Name"] = [[Delete Tuning]];


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Delete Tuning.UIStroke
G2L["a0"] = Instance.new("UIStroke", G2L["9f"]);
G2L["a0"]["Thickness"] = 2;
G2L["a0"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Delete Tuning.UIGradient
G2L["a1"] = Instance.new("UIGradient", G2L["9f"]);
G2L["a1"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Delete Tuning.UICorner
G2L["a2"] = Instance.new("UICorner", G2L["9f"]);



-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Delete Tuning.DeleteTuningBtn
G2L["a3"] = Instance.new("TextButton", G2L["9f"]);
G2L["a3"]["TextWrapped"] = true;
G2L["a3"]["BorderSizePixel"] = 0;
G2L["a3"]["TextSize"] = 20;
G2L["a3"]["TextScaled"] = true;
G2L["a3"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["a3"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["a3"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["a3"]["BackgroundTransparency"] = 1;
G2L["a3"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["a3"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["a3"]["Text"] = [[Delete Tuning]];
G2L["a3"]["Name"] = [[DeleteTuningBtn]];
G2L["a3"]["Position"] = UDim2.new(0.00106, 0, 0.07401, 0);


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.Delete Tuning.DeleteTuningBtn.UIGradient
G2L["a4"] = Instance.new("UIGradient", G2L["a3"]);



-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList
G2L["a5"] = Instance.new("Frame", G2L["95"]);
G2L["a5"]["BorderSizePixel"] = 0;
G2L["a5"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["a5"]["Size"] = UDim2.new(0, 203, 0, 177);
G2L["a5"]["Position"] = UDim2.new(0.41734, 0, 0.0359, 0);
G2L["a5"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["a5"]["Name"] = [[ConfigList]];


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.UIStroke
G2L["a6"] = Instance.new("UIStroke", G2L["a5"]);
G2L["a6"]["Thickness"] = 2;
G2L["a6"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.UIGradient
G2L["a7"] = Instance.new("UIGradient", G2L["a5"]);
G2L["a7"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.UICorner
G2L["a8"] = Instance.new("UICorner", G2L["a5"]);



-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.ScrollingFrame
G2L["a9"] = Instance.new("ScrollingFrame", G2L["a5"]);
G2L["a9"]["Active"] = true;
G2L["a9"]["BorderSizePixel"] = 0;
G2L["a9"]["BackgroundColor3"] = Color3.fromRGB(53, 53, 53);
G2L["a9"]["Size"] = UDim2.new(0, 203, 0, 176);
G2L["a9"]["Position"] = UDim2.new(0, 0, 0.00256, 0);
G2L["a9"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["a9"]["BackgroundTransparency"] = 1;


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.ScrollingFrame.UIListLayout
G2L["aa"] = Instance.new("UIListLayout", G2L["a9"]);
G2L["aa"]["SortOrder"] = Enum.SortOrder.LayoutOrder;


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.ScrollingFrame.Clone
G2L["ab"] = Instance.new("Frame", G2L["a9"]);
G2L["ab"]["Visible"] = false;
G2L["ab"]["BorderSizePixel"] = 0;
G2L["ab"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["ab"]["Size"] = UDim2.new(0, 188, 0, 29);
G2L["ab"]["Position"] = UDim2.new(0, 0, 0, 0);
G2L["ab"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["ab"]["Name"] = [[Clone]];


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.ScrollingFrame.Clone.UIStroke
G2L["ac"] = Instance.new("UIStroke", G2L["ab"]);
G2L["ac"]["Thickness"] = 2;
G2L["ac"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.ScrollingFrame.Clone.UIGradient
G2L["ad"] = Instance.new("UIGradient", G2L["ab"]);
G2L["ad"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.ScrollingFrame.Clone.UICorner
G2L["ae"] = Instance.new("UICorner", G2L["ab"]);



-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.ScrollingFrame.Clone.CloneBtn
G2L["af"] = Instance.new("TextButton", G2L["ab"]);
G2L["af"]["TextWrapped"] = true;
G2L["af"]["BorderSizePixel"] = 0;
G2L["af"]["TextSize"] = 20;
G2L["af"]["TextScaled"] = true;
G2L["af"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["af"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["af"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["af"]["BackgroundTransparency"] = 1;
G2L["af"]["Size"] = UDim2.new(0, 190, 0, 29);
G2L["af"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["af"]["Text"] = [[]];
G2L["af"]["Name"] = [[CloneBtn]];


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.ConfigList.ScrollingFrame.Clone.CloneBtn.UIGradient
G2L["b0"] = Instance.new("UIGradient", G2L["af"]);



-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.FileNameSave
G2L["b1"] = Instance.new("Frame", G2L["95"]);
G2L["b1"]["BorderSizePixel"] = 0;
G2L["b1"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["b1"]["Size"] = UDim2.new(0, 127, 0, 36);
G2L["b1"]["Position"] = UDim2.new(0.04607, 0, 0.31795, 0);
G2L["b1"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["b1"]["Name"] = [[FileNameSave]];


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.FileNameSave.UIStroke
G2L["b2"] = Instance.new("UIStroke", G2L["b1"]);
G2L["b2"]["Thickness"] = 2;
G2L["b2"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.FileNameSave.UIGradient
G2L["b3"] = Instance.new("UIGradient", G2L["b1"]);
G2L["b3"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.FileNameSave.UICorner
G2L["b4"] = Instance.new("UICorner", G2L["b1"]);



-- StarterGui.DannTunner.Open.FrameAll.ConfigFrame.FileNameSave.FileNameTxt
G2L["b5"] = Instance.new("TextBox", G2L["b1"]);
G2L["b5"]["Name"] = [[FileNameTxt]];
G2L["b5"]["BorderSizePixel"] = 0;
G2L["b5"]["TextSize"] = 20;
G2L["b5"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["b5"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["b5"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["b5"]["Size"] = UDim2.new(0, 127, 0, 36);
G2L["b5"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["b5"]["Text"] = [[]];
G2L["b5"]["BackgroundTransparency"] = 1;


-- StarterGui.DannTunner.Open.FrameAll.CreditFrame
G2L["b6"] = Instance.new("Frame", G2L["8"]);
G2L["b6"]["Visible"] = false;
G2L["b6"]["BorderSizePixel"] = 0;
G2L["b6"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["b6"]["Size"] = UDim2.new(0, 369, 0, 195);
G2L["b6"]["Position"] = UDim2.new(0.22909, 0, 0.15377, 0);
G2L["b6"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["b6"]["Name"] = [[CreditFrame]];


-- StarterGui.DannTunner.Open.FrameAll.CreditFrame.UIStroke
G2L["b7"] = Instance.new("UIStroke", G2L["b6"]);
G2L["b7"]["Thickness"] = 2;
G2L["b7"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.FrameAll.CreditFrame.UIGradient
G2L["b8"] = Instance.new("UIGradient", G2L["b6"]);
G2L["b8"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.FrameAll.CreditFrame.UICorner
G2L["b9"] = Instance.new("UICorner", G2L["b6"]);



-- StarterGui.DannTunner.Open.FrameAll.CreditFrame.Credit
G2L["ba"] = Instance.new("TextLabel", G2L["b6"]);
G2L["ba"]["TextWrapped"] = true;
G2L["ba"]["BorderSizePixel"] = 0;
G2L["ba"]["TextSize"] = 20;
G2L["ba"]["TextScaled"] = true;
G2L["ba"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["ba"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["ba"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["ba"]["BackgroundTransparency"] = 1;
G2L["ba"]["Size"] = UDim2.new(0, 169, 0, 81);
G2L["ba"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["ba"]["Text"] = [[Credit by Fandy (Sum Idea) & Dika (Android Support)]];
G2L["ba"]["Name"] = [[Credit]];
G2L["ba"]["Position"] = UDim2.new(0.271, 0, 0.61026, 0);


-- StarterGui.DannTunner.Open.FrameAll.CreditFrame.Credit
G2L["bb"] = Instance.new("TextLabel", G2L["b6"]);
G2L["bb"]["TextWrapped"] = true;
G2L["bb"]["BorderSizePixel"] = 0;
G2L["bb"]["TextSize"] = 20;
G2L["bb"]["TextScaled"] = true;
G2L["bb"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["bb"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["bb"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["bb"]["BackgroundTransparency"] = 1;
G2L["bb"]["Size"] = UDim2.new(0, 121, 0, 29);
G2L["bb"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["bb"]["Text"] = [[Creator : Dann]];
G2L["bb"]["Name"] = [[Credit]];
G2L["bb"]["Position"] = UDim2.new(0.33604, 0, 0.18974, 0);


-- StarterGui.DannTunner.Open.HandlerFrame
G2L["bc"] = Instance.new("Folder", G2L["3"]);
G2L["bc"]["Name"] = [[HandlerFrame]];


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage
G2L["bd"] = Instance.new("Frame", G2L["bc"]);
G2L["bd"]["BorderSizePixel"] = 0;
G2L["bd"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["bd"]["Size"] = UDim2.new(0, 103, 0, 233);
G2L["bd"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["bd"]["Name"] = [[MainPage]];


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.UIStroke
G2L["be"] = Instance.new("UIStroke", G2L["bd"]);
G2L["be"]["Thickness"] = 2;
G2L["be"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.UIGradient
G2L["bf"] = Instance.new("UIGradient", G2L["bd"]);
G2L["bf"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.UICorner
G2L["c0"] = Instance.new("UICorner", G2L["bd"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.TuningButton
G2L["c1"] = Instance.new("Frame", G2L["bd"]);
G2L["c1"]["BorderSizePixel"] = 0;
G2L["c1"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["c1"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["c1"]["Position"] = UDim2.new(0, 0, 0.1588, 0);
G2L["c1"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["c1"]["Name"] = [[TuningButton]];


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.TuningButton.TuningButtonBtn
G2L["c2"] = Instance.new("TextButton", G2L["c1"]);
G2L["c2"]["BorderSizePixel"] = 0;
G2L["c2"]["TextSize"] = 20;
G2L["c2"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["c2"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["c2"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["c2"]["BackgroundTransparency"] = 1;
G2L["c2"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["c2"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["c2"]["Text"] = [[Tuning]];
G2L["c2"]["Name"] = [[TuningButtonBtn]];
G2L["c2"]["Position"] = UDim2.new(0, 0, -0.01362, 0);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.TuningButton.TuningButtonBtn.UIGradient
G2L["c3"] = Instance.new("UIGradient", G2L["c2"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.TuningButton.UIStroke
G2L["c4"] = Instance.new("UIStroke", G2L["c1"]);
G2L["c4"]["Thickness"] = 2;
G2L["c4"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.TuningButton.UIGradient
G2L["c5"] = Instance.new("UIGradient", G2L["c1"]);
G2L["c5"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.TuningButton.UICorner
G2L["c6"] = Instance.new("UICorner", G2L["c1"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.MiscButton
G2L["c7"] = Instance.new("Frame", G2L["bd"]);
G2L["c7"]["BorderSizePixel"] = 0;
G2L["c7"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["c7"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["c7"]["Position"] = UDim2.new(0, 0, 0.3133, 0);
G2L["c7"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["c7"]["Name"] = [[MiscButton]];


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.MiscButton.MiscButtonBtn
G2L["c8"] = Instance.new("TextButton", G2L["c7"]);
G2L["c8"]["BorderSizePixel"] = 0;
G2L["c8"]["TextSize"] = 20;
G2L["c8"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["c8"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["c8"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["c8"]["BackgroundTransparency"] = 1;
G2L["c8"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["c8"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["c8"]["Text"] = [[Misc]];
G2L["c8"]["Name"] = [[MiscButtonBtn]];
G2L["c8"]["Position"] = UDim2.new(0, 0, -0.01362, 0);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.MiscButton.MiscButtonBtn.UIGradient
G2L["c9"] = Instance.new("UIGradient", G2L["c8"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.MiscButton.UIStroke
G2L["ca"] = Instance.new("UIStroke", G2L["c7"]);
G2L["ca"]["Thickness"] = 2;
G2L["ca"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.MiscButton.UIGradient
G2L["cb"] = Instance.new("UIGradient", G2L["c7"]);
G2L["cb"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.MiscButton.UICorner
G2L["cc"] = Instance.new("UICorner", G2L["c7"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ConfigButton
G2L["cd"] = Instance.new("Frame", G2L["bd"]);
G2L["cd"]["BorderSizePixel"] = 0;
G2L["cd"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["cd"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["cd"]["Position"] = UDim2.new(0, 0, 0.46781, 0);
G2L["cd"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["cd"]["Name"] = [[ConfigButton]];


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ConfigButton.ConfigButtonBtn
G2L["ce"] = Instance.new("TextButton", G2L["cd"]);
G2L["ce"]["TextWrapped"] = true;
G2L["ce"]["BorderSizePixel"] = 0;
G2L["ce"]["TextSize"] = 20;
G2L["ce"]["TextScaled"] = true;
G2L["ce"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["ce"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["ce"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["ce"]["BackgroundTransparency"] = 1;
G2L["ce"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["ce"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["ce"]["Text"] = [[Config & Save]];
G2L["ce"]["Name"] = [[ConfigButtonBtn]];
G2L["ce"]["Position"] = UDim2.new(0, 0, -0.01362, 0);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ConfigButton.ConfigButtonBtn.UIGradient
G2L["cf"] = Instance.new("UIGradient", G2L["ce"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ConfigButton.UIStroke
G2L["d0"] = Instance.new("UIStroke", G2L["cd"]);
G2L["d0"]["Thickness"] = 2;
G2L["d0"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ConfigButton.UIGradient
G2L["d1"] = Instance.new("UIGradient", G2L["cd"]);
G2L["d1"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ConfigButton.UICorner
G2L["d2"] = Instance.new("UICorner", G2L["cd"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup
G2L["d3"] = Instance.new("Frame", G2L["bd"]);
G2L["d3"]["BorderSizePixel"] = 0;
G2L["d3"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["d3"]["Size"] = UDim2.new(0, 103, 0, 53);
G2L["d3"]["Position"] = UDim2.new(0, 0, 0.77253, 0);
G2L["d3"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["d3"]["Name"] = [[ProfileGroup]];


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup.UICorner
G2L["d4"] = Instance.new("UICorner", G2L["d3"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup.UIStroke
G2L["d5"] = Instance.new("UIStroke", G2L["d3"]);
G2L["d5"]["Thickness"] = 2;
G2L["d5"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup.UIGradient
G2L["d6"] = Instance.new("UIGradient", G2L["d3"]);
G2L["d6"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup.AvaLabelImg
G2L["d7"] = Instance.new("ImageLabel", G2L["d3"]);
G2L["d7"]["BorderSizePixel"] = 0;
G2L["d7"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["d7"]["Image"] = [[rbxasset://textures/ui/GuiImagePlaceholder.png]];
G2L["d7"]["Size"] = UDim2.new(0, 31, 0, 31);
G2L["d7"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["d7"]["BackgroundTransparency"] = 1;
G2L["d7"]["Name"] = [[AvaLabelImg]];


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup.AvaLabelImg.scAvaHandler
G2L["d8"] = Instance.new("LocalScript", G2L["d7"]);
G2L["d8"]["Name"] = [[scAvaHandler]];


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup.AvaLabelImg.UIStroke
G2L["d9"] = Instance.new("UIStroke", G2L["d7"]);
G2L["d9"]["Thickness"] = 2;
G2L["d9"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup.AvaLabelImg.UICorner
G2L["da"] = Instance.new("UICorner", G2L["d7"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup.AvaLabelImg.NamaLabel
G2L["db"] = Instance.new("TextLabel", G2L["d7"]);
G2L["db"]["BorderSizePixel"] = 0;
G2L["db"]["TextSize"] = 17;
G2L["db"]["TextStrokeColor3"] = Color3.fromRGB(255, 255, 255);
G2L["db"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["db"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["db"]["TextColor3"] = Color3.fromRGB(254, 254, 254);
G2L["db"]["BackgroundTransparency"] = 1;
G2L["db"]["Size"] = UDim2.new(0, 103, 0, 22);
G2L["db"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["db"]["Text"] = [[]];
G2L["db"]["Name"] = [[NamaLabel]];
G2L["db"]["Position"] = UDim2.new(0, 0, 1, 0);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.CreditPage
G2L["dc"] = Instance.new("Frame", G2L["bd"]);
G2L["dc"]["BorderSizePixel"] = 0;
G2L["dc"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["dc"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["dc"]["Position"] = UDim2.new(0, 0, 0.62232, 0);
G2L["dc"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["dc"]["Name"] = [[CreditPage]];


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.CreditPage.CreditPageBtn
G2L["dd"] = Instance.new("TextButton", G2L["dc"]);
G2L["dd"]["TextWrapped"] = true;
G2L["dd"]["BorderSizePixel"] = 0;
G2L["dd"]["TextSize"] = 20;
G2L["dd"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["dd"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["dd"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["dd"]["BackgroundTransparency"] = 1;
G2L["dd"]["Size"] = UDim2.new(0, 103, 0, 29);
G2L["dd"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["dd"]["Text"] = [[Credit]];
G2L["dd"]["Name"] = [[CreditPageBtn]];
G2L["dd"]["Position"] = UDim2.new(0, 0, -0.01362, 0);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.CreditPage.CreditPageBtn.UIGradient
G2L["de"] = Instance.new("UIGradient", G2L["dd"]);



-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.CreditPage.UIStroke
G2L["df"] = Instance.new("UIStroke", G2L["dc"]);
G2L["df"]["Thickness"] = 2;
G2L["df"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.CreditPage.UIGradient
G2L["e0"] = Instance.new("UIGradient", G2L["dc"]);
G2L["e0"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.CreditPage.UICorner
G2L["e1"] = Instance.new("UICorner", G2L["dc"]);



-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS
G2L["e2"] = Instance.new("Frame", G2L["bc"]);
G2L["e2"]["BorderSizePixel"] = 0;
G2L["e2"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["e2"]["Size"] = UDim2.new(0, 480, 0, 31);
G2L["e2"]["Position"] = UDim2.new(-0, 0, 0, 0);
G2L["e2"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["e2"]["Name"] = [[LABELATAS]];


-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS.UICorner
G2L["e3"] = Instance.new("UICorner", G2L["e2"]);



-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS.UIGradient
G2L["e4"] = Instance.new("UIGradient", G2L["e2"]);
G2L["e4"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS.UIStroke
G2L["e5"] = Instance.new("UIStroke", G2L["e2"]);
G2L["e5"]["Thickness"] = 2;
G2L["e5"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS.Label Atas Kiri
G2L["e6"] = Instance.new("Frame", G2L["e2"]);
G2L["e6"]["BorderSizePixel"] = 0;
G2L["e6"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["e6"]["Size"] = UDim2.new(0, 480, 0, 30);
G2L["e6"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["e6"]["Name"] = [[Label Atas Kiri]];


-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS.Label Atas Kiri.Tulisan tengah
G2L["e7"] = Instance.new("TextLabel", G2L["e6"]);
G2L["e7"]["TextWrapped"] = true;
G2L["e7"]["BorderSizePixel"] = 0;
G2L["e7"]["TextSize"] = 14;
G2L["e7"]["TextScaled"] = true;
G2L["e7"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["e7"]["FontFace"] = Font.new([[rbxasset://fonts/families/FredokaOne.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["e7"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["e7"]["BackgroundTransparency"] = 1;
G2L["e7"]["Size"] = UDim2.new(0, 169, 0, 14);
G2L["e7"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["e7"]["Text"] = [[DannTuner by Unknown]];
G2L["e7"]["Name"] = [[Tulisan tengah]];
G2L["e7"]["Position"] = UDim2.new(0.35965, 0, 0.25806, 0);


-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS.Label Atas Kiri.IMgUJung
G2L["e8"] = Instance.new("ImageLabel", G2L["e6"]);
G2L["e8"]["BorderSizePixel"] = 0;
G2L["e8"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["e8"]["Image"] = [[rbxassetid://106127307787485]];
G2L["e8"]["Size"] = UDim2.new(0, 51, 0, 48);
G2L["e8"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["e8"]["BackgroundTransparency"] = 1;
G2L["e8"]["Name"] = [[IMgUJung]];
G2L["e8"]["Position"] = UDim2.new(0, 0, -0.16129, 0);


-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS.Label Atas Kiri.UICorner
G2L["e9"] = Instance.new("UICorner", G2L["e6"]);



-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS.Label Atas Kiri.UIGradient
G2L["ea"] = Instance.new("UIGradient", G2L["e6"]);
G2L["ea"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.HandlerFrame.LABELATAS.Label Atas Kiri.UIStroke
G2L["eb"] = Instance.new("UIStroke", G2L["e6"]);
G2L["eb"]["Thickness"] = 2;
G2L["eb"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.NotifFrame
G2L["ec"] = Instance.new("Frame", G2L["3"]);
G2L["ec"]["Visible"] = false;
G2L["ec"]["BorderSizePixel"] = 0;
G2L["ec"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["ec"]["Size"] = UDim2.new(0, 114, 0, 41);
G2L["ec"]["Position"] = UDim2.new(0.75833, 0, 0.81116, 0);
G2L["ec"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["ec"]["Name"] = [[NotifFrame]];


-- StarterGui.DannTunner.Open.NotifFrame.Notif
G2L["ed"] = Instance.new("TextLabel", G2L["ec"]);
G2L["ed"]["TextWrapped"] = true;
G2L["ed"]["BorderSizePixel"] = 0;
G2L["ed"]["TextSize"] = 17;
G2L["ed"]["TextScaled"] = true;
G2L["ed"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["ed"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["ed"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["ed"]["BackgroundTransparency"] = 1;
G2L["ed"]["Size"] = UDim2.new(0, 115, 0, 44);
G2L["ed"]["Visible"] = false;
G2L["ed"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["ed"]["Name"] = [[Notif]];
G2L["ed"]["Position"] = UDim2.new(0.0014, 0, -0.05586, 0);


-- StarterGui.DannTunner.Open.NotifFrame.UICorner
G2L["ee"] = Instance.new("UICorner", G2L["ec"]);



-- StarterGui.DannTunner.Open.NotifFrame.UIGradient
G2L["ef"] = Instance.new("UIGradient", G2L["ec"]);
G2L["ef"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Open.NotifFrame.UIStroke
G2L["f0"] = Instance.new("UIStroke", G2L["ec"]);
G2L["f0"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Open.UIStroke
G2L["f1"] = Instance.new("UIStroke", G2L["3"]);
G2L["f1"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.OpenFrame
G2L["f2"] = Instance.new("ImageButton", G2L["1"]);
G2L["f2"]["BorderSizePixel"] = 0;
G2L["f2"]["Visible"] = false;
G2L["f2"]["BackgroundColor3"] = Color3.fromRGB(103, 111, 118);
G2L["f2"]["Image"] = [[rbxassetid://111851901427385]];
G2L["f2"]["Size"] = UDim2.new(0, 60, 0, 60);
G2L["f2"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["f2"]["Name"] = [[OpenFrame]];
G2L["f2"]["Position"] = UDim2.new(0.22041, 0, 0.52624, 0);


-- StarterGui.DannTunner.OpenFrame.drg
G2L["f3"] = Instance.new("LocalScript", G2L["f2"]);
G2L["f3"]["Name"] = [[drg]];


-- StarterGui.DannTunner.OpenFrame.UICorner
G2L["f4"] = Instance.new("UICorner", G2L["f2"]);
G2L["f4"]["CornerRadius"] = UDim.new(2, 0);


-- StarterGui.DannTunner.DraggyTime
G2L["f5"] = Instance.new("TextLabel", G2L["1"]);
G2L["f5"]["TextWrapped"] = true;
G2L["f5"]["BorderSizePixel"] = 0;
G2L["f5"]["TextSize"] = 20;
G2L["f5"]["TextScaled"] = true;
G2L["f5"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["f5"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["f5"]["TextColor3"] = Color3.fromRGB(0, 0, 0);
G2L["f5"]["Size"] = UDim2.new(0, 158, 0, 36);
G2L["f5"]["Visible"] = false;
G2L["f5"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["f5"]["Text"] = [[]];
G2L["f5"]["Name"] = [[DraggyTime]];
G2L["f5"]["Position"] = UDim2.new(0.51666, 0, 0.74222, 0);


-- StarterGui.DannTunner.DraggyTime.DraggSum
G2L["f6"] = Instance.new("LocalScript", G2L["f5"]);
G2L["f6"]["Name"] = [[DraggSum]];


-- StarterGui.DannTunner.DraggyTime.drg
G2L["f7"] = Instance.new("LocalScript", G2L["f5"]);
G2L["f7"]["Name"] = [[drg]];


-- StarterGui.DannTunner.DraggyTime.UICorner
G2L["f8"] = Instance.new("UICorner", G2L["f5"]);



-- StarterGui.DannTunner.Intro
G2L["f9"] = Instance.new("Frame", G2L["1"]);
G2L["f9"]["Visible"] = false;
G2L["f9"]["BorderSizePixel"] = 0;
G2L["f9"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["f9"]["Size"] = UDim2.new(0, 250, 0, 109);
G2L["f9"]["Position"] = UDim2.new(0.38678, 0, 0.37668, 0);
G2L["f9"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["f9"]["Name"] = [[Intro]];


-- StarterGui.DannTunner.Intro.LocalScript
G2L["fa"] = Instance.new("LocalScript", G2L["f9"]);



-- StarterGui.DannTunner.Intro.UICorner
G2L["fb"] = Instance.new("UICorner", G2L["f9"]);



-- StarterGui.DannTunner.Intro.UIGradient
G2L["fc"] = Instance.new("UIGradient", G2L["f9"]);
G2L["fc"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Intro.UIStroke
G2L["fd"] = Instance.new("UIStroke", G2L["f9"]);
G2L["fd"]["Thickness"] = 2;
G2L["fd"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Intro.TextLabel
G2L["fe"] = Instance.new("TextLabel", G2L["f9"]);
G2L["fe"]["TextWrapped"] = true;
G2L["fe"]["BorderSizePixel"] = 0;
G2L["fe"]["TextSize"] = 20;
G2L["fe"]["TextStrokeColor3"] = Color3.fromRGB(255, 255, 255);
G2L["fe"]["TextScaled"] = true;
G2L["fe"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["fe"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["fe"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["fe"]["BackgroundTransparency"] = 1;
G2L["fe"]["Size"] = UDim2.new(0, 250, 0, 46);
G2L["fe"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["fe"]["Text"] = [[DannTunner starting]];
G2L["fe"]["Position"] = UDim2.new(0, 0, -0.00393, 0);


-- StarterGui.DannTunner.Intro.BarBack
G2L["ff"] = Instance.new("Frame", G2L["f9"]);
G2L["ff"]["BorderSizePixel"] = 0;
G2L["ff"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["ff"]["Size"] = UDim2.new(0, 250, 0, 17);
G2L["ff"]["Position"] = UDim2.new(0, 0, 0.83981, 0);
G2L["ff"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["ff"]["Name"] = [[BarBack]];


-- StarterGui.DannTunner.Intro.BarBack.UIStroke
G2L["100"] = Instance.new("UIStroke", G2L["ff"]);
G2L["100"]["Thickness"] = 2;
G2L["100"]["Color"] = Color3.fromRGB(75, 75, 75);


-- StarterGui.DannTunner.Intro.BarBack.UIGradient
G2L["101"] = Instance.new("UIGradient", G2L["ff"]);
G2L["101"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(53, 53, 53)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(53, 53, 53))};


-- StarterGui.DannTunner.Intro.BarBack.UICorner
G2L["102"] = Instance.new("UICorner", G2L["ff"]);



-- StarterGui.DannTunner.Intro.BarBack.BarFill
G2L["103"] = Instance.new("Frame", G2L["ff"]);
G2L["103"]["Visible"] = false;
G2L["103"]["BorderSizePixel"] = 0;
G2L["103"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["103"]["Size"] = UDim2.new(0, 250, 0, 17);
G2L["103"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["103"]["Name"] = [[BarFill]];


-- StarterGui.DannTunner.Intro.BarBack.BarFill.UICorner
G2L["104"] = Instance.new("UICorner", G2L["103"]);



-- StarterGui.DannTunner.Intro.BarBack.BarFill.UIGradient
G2L["105"] = Instance.new("UIGradient", G2L["103"]);
G2L["105"]["Color"] = ColorSequence.new{ColorSequenceKeypoint.new(0.000, Color3.fromRGB(0, 214, 44)),ColorSequenceKeypoint.new(1.000, Color3.fromRGB(0, 214, 44))};


-- StarterGui.DannTunner.Intro.StatusLabel
G2L["106"] = Instance.new("TextLabel", G2L["f9"]);
G2L["106"]["TextWrapped"] = true;
G2L["106"]["BorderSizePixel"] = 0;
G2L["106"]["TextSize"] = 20;
G2L["106"]["TextStrokeColor3"] = Color3.fromRGB(255, 255, 255);
G2L["106"]["TextScaled"] = true;
G2L["106"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["106"]["FontFace"] = Font.new([[rbxasset://fonts/families/ComicNeueAngular.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["106"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["106"]["BackgroundTransparency"] = 1;
G2L["106"]["Size"] = UDim2.new(0, 136, 0, 22);
G2L["106"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["106"]["Text"] = [[]];
G2L["106"]["Name"] = [[StatusLabel]];
G2L["106"]["Position"] = UDim2.new(0.228, 0, 0.5557, 0);


-- StarterGui.DannTunner.SoundHandler
local function C_2()
local script = G2L["2"];
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
task.spawn(C_2);
-- StarterGui.DannTunner.Open.drg
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
-- StarterGui.DannTunner.Open.Handler
local function C_5()
local script = G2L["5"];
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
	
	local frameconfirm = MiscFrame:WaitForChild("Rejoin"):WaitForChild("Confirm")
	
	RejoinBtn.MouseButton1Click:Connect(function ()
		if frameconfirm.Visible == true then
			frameconfirm.Visible = false
		else
			frameconfirm.Visible = true
		end
	end)
	
	local frameconfirmYesBtn = MiscFrame:WaitForChild("Rejoin"):WaitForChild("Confirm"):WaitForChild("Yes"):WaitForChild("YesBtn")
	local frameconfirmNoBtn= MiscFrame:WaitForChild("Rejoin"):WaitForChild("Confirm"):WaitForChild("No"):WaitForChild("NoBtn")
	
	frameconfirmYesBtn.MouseButton1Click:Connect(function ()
		local TeleportService = game:GetService("TeleportService")
		local function Rejoin()
			local player = Players.LocalPlayer
			TeleportService:Teleport(game.PlaceId, player)
		end
		Rejoin()
	end)
	
	frameconfirmNoBtn.MouseButton1Click:Connect(function ()
		frameconfirm.Visible = false
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
task.spawn(C_5);
-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerAmount.nn
local function C_16()
local script = G2L["16"];
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
task.spawn(C_16);
-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.TurboCharger.TurboChargerBoost.nn
local function C_1c()
local script = G2L["1c"];
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
task.spawn(C_1c);
-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerAmount.nn
local function C_27()
local script = G2L["27"];
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
task.spawn(C_27);
-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.SuperCharger.SuperChargerBoost.nn
local function C_2b()
local script = G2L["2b"];
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
task.spawn(C_2b);
-- StarterGui.DannTunner.Open.FrameAll.TuningFrame.HorsePower.HP.nn
local function C_33()
local script = G2L["33"];
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
task.spawn(C_33);
-- StarterGui.DannTunner.Open.FrameAll.LoadingFrame.Grattering.Grthndl
local function C_45()
local script = G2L["45"];
	local parent = script.Parent
	local Players = game:GetService("Players")
	local player = Players.LocalPlayer
	parent.Text = `Welcome back {player.Name}!`
end;
task.spawn(C_45);
-- StarterGui.DannTunner.Open.FrameAll.MiscFrame.Teleport.TeleportList.TeleportHandler
local function C_68()
local script = G2L["68"];
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
task.spawn(C_68);
-- StarterGui.DannTunner.Open.HandlerFrame.MainPage.ProfileGroup.AvaLabelImg.scAvaHandler
local function C_d8()
local script = G2L["d8"];
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
task.spawn(C_d8);
-- StarterGui.DannTunner.OpenFrame.drg
local function C_f3()
local script = G2L["f3"];
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
task.spawn(C_f3);
-- StarterGui.DannTunner.DraggyTime.DraggSum
local function C_f6()
local script = G2L["f6"];
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
task.spawn(C_f6);
-- StarterGui.DannTunner.DraggyTime.drg
local function C_f7()
local script = G2L["f7"];
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
task.spawn(C_f7);
-- StarterGui.DannTunner.Intro.LocalScript
local function C_fa()
local script = G2L["fa"];
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
task.spawn(C_fa);

return G2L["1"], require;
