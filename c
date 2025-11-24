-- Gui to Lua
-- Version: 3.2

-- Instances:

local cedit = Instance.new("ScreenGui")
local Open = Instance.new("Frame")
local usn = Instance.new("TextBox")
local usn1 = Instance.new("TextLabel")
local Tuning = Instance.new("Folder")
local TunnerFrame = Instance.new("Frame")
local Brake = Instance.new("TextBox")
local Brake1 = Instance.new("TextLabel")
local LABELATAS = Instance.new("TextLabel")
local HP = Instance.new("TextBox")
local HP1 = Instance.new("TextLabel")
local SuperCharger1 = Instance.new("TextLabel")
local SuperCharger = Instance.new("TextBox")
local SuperChargerBoost1 = Instance.new("TextLabel")
local SuperChargerBoost = Instance.new("TextBox")
local TurboCharger1 = Instance.new("TextLabel")
local TurboCharger = Instance.new("TextBox")
local TurboChargerBoost1 = Instance.new("TextLabel")
local TurboChargerBoost = Instance.new("TextBox")
local ResetTune = Instance.new("TextButton")
local UICorner = Instance.new("UICorner")
local SetTune = Instance.new("TextButton")
local UICorner_2 = Instance.new("UICorner")
local ConfigFrame = Instance.new("Frame")
local SaveConfig = Instance.new("TextButton")
local UICorner_3 = Instance.new("UICorner")
local DeleteConfig = Instance.new("TextButton")
local UICorner_4 = Instance.new("UICorner")
local TuningFileName = Instance.new("TextBox")
local LoadConfig = Instance.new("Frame")
local Template = Instance.new("TextButton")
local UICorner_5 = Instance.new("UICorner")
local Other = Instance.new("Frame")
local Template_2 = Instance.new("TextButton")
local UICorner_6 = Instance.new("UICorner")
local ConfigTune = Instance.new("TextLabel")
local Pembatas = Instance.new("Folder")
local PEMBATAS = Instance.new("TextLabel")
local PEMBATAS_2 = Instance.new("TextLabel")
local PEMBATAS_3 = Instance.new("TextLabel")
local PEMBATAS_4 = Instance.new("TextLabel")
local PEMBATAS_5 = Instance.new("TextLabel")
local PEMBATAS_6 = Instance.new("TextLabel")
local PEMBATAS_7 = Instance.new("TextLabel")
local Notif = Instance.new("TextLabel")
local usnBtn = Instance.new("TextButton")
local UICorner_7 = Instance.new("UICorner")
local RND = Instance.new("TextLabel")
local OpenFrame = Instance.new("ImageButton")
local UICorner_8 = Instance.new("UICorner")

--Properties:

cedit.Name = "cedit"
cedit.Parent = game.Players.LocalPlayer:WaitForChild("PlayerGui")
cedit.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

Open.Name = "Open"
Open.Parent = cedit
Open.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
Open.BorderColor3 = Color3.fromRGB(0, 0, 0)
Open.BorderSizePixel = 0
Open.Position = UDim2.new(0.205615938, 0, 0.344947308, 0)
Open.Size = UDim2.new(0, 310, 0, 138)
Open.Visible = false

usn.Name = "usn"
usn.Parent = Open
usn.Active = false
usn.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
usn.BorderColor3 = Color3.fromRGB(0, 0, 0)
usn.BorderSizePixel = 0
usn.Position = UDim2.new(0.0354838707, 0, 0.224637687, 0)
usn.Size = UDim2.new(0, 119, 0, 26)
usn.ClearTextOnFocus = false
usn.Font = Enum.Font.SourceSans
usn.Text = ""
usn.TextColor3 = Color3.fromRGB(0, 0, 0)
usn.TextSize = 14.000

usn1.Name = "usn1"
usn1.Parent = Open
usn1.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
usn1.BackgroundTransparency = 1.000
usn1.BorderColor3 = Color3.fromRGB(0, 0, 0)
usn1.BorderSizePixel = 0
usn1.Position = UDim2.new(-0.0967741907, 0, -0.0621117838, 0)
usn1.Size = UDim2.new(0, 200, 0, 50)
usn1.Font = Enum.Font.Arial
usn1.Text = "Username"
usn1.TextColor3 = Color3.fromRGB(255, 255, 255)
usn1.TextSize = 17.000

Tuning.Name = "Tuning"
Tuning.Parent = Open

TunnerFrame.Name = "TunnerFrame"
TunnerFrame.Parent = Tuning
TunnerFrame.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
TunnerFrame.BorderColor3 = Color3.fromRGB(0, 0, 0)
TunnerFrame.BorderSizePixel = 0
TunnerFrame.Position = UDim2.new(0.445161283, 0, 0, 0)
TunnerFrame.Size = UDim2.new(0, 325, 0, 242)

Brake.Name = "Brake"
Brake.Parent = TunnerFrame
Brake.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Brake.BorderColor3 = Color3.fromRGB(0, 0, 0)
Brake.BorderSizePixel = 0
Brake.Position = UDim2.new(0.0947359502, 0, 0.241166607, 0)
Brake.Size = UDim2.new(0, 48, 0, 26)
Brake.Visible = false
Brake.Font = Enum.Font.SourceSans
Brake.Text = ""
Brake.TextColor3 = Color3.fromRGB(0, 0, 0)
Brake.TextSize = 14.000

Brake1.Name = "Brake1"
Brake1.Parent = TunnerFrame
Brake1.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Brake1.BackgroundTransparency = 1.000
Brake1.BorderColor3 = Color3.fromRGB(0, 0, 0)
Brake1.BorderSizePixel = 0
Brake1.Position = UDim2.new(-0.000357759913, 0, 0.11570248, 0)
Brake1.Size = UDim2.new(0, 110, 0, 31)
Brake1.Font = Enum.Font.Arial
Brake1.Text = "Brake Force not working"
Brake1.TextColor3 = Color3.fromRGB(255, 255, 255)
Brake1.TextScaled = true
Brake1.TextSize = 17.000
Brake1.TextWrapped = true

LABELATAS.Name = "LABELATAS"
LABELATAS.Parent = TunnerFrame
LABELATAS.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
LABELATAS.BorderColor3 = Color3.fromRGB(0, 0, 0)
LABELATAS.BorderSizePixel = 0
LABELATAS.Size = UDim2.new(0, 325, 0, 28)
LABELATAS.Font = Enum.Font.Arial
LABELATAS.Text = "Tuning"
LABELATAS.TextColor3 = Color3.fromRGB(255, 255, 255)
LABELATAS.TextSize = 17.000

HP.Name = "HP"
HP.Parent = TunnerFrame
HP.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
HP.BorderColor3 = Color3.fromRGB(0, 0, 0)
HP.BorderSizePixel = 0
HP.Position = UDim2.new(0.75012058, 0, 0.253563315, 0)
HP.Size = UDim2.new(0, 48, 0, 26)
HP.Font = Enum.Font.SourceSans
HP.Text = ""
HP.TextColor3 = Color3.fromRGB(0, 0, 0)
HP.TextSize = 14.000

HP1.Name = "HP1"
HP1.Parent = TunnerFrame
HP1.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
HP1.BackgroundTransparency = 1.000
HP1.BorderColor3 = Color3.fromRGB(0, 0, 0)
HP1.BorderSizePixel = 0
HP1.Position = UDim2.new(0.655026853, 0, 0.128099173, 0)
HP1.Size = UDim2.new(0, 110, 0, 31)
HP1.Font = Enum.Font.Arial
HP1.Text = "HorsePower"
HP1.TextColor3 = Color3.fromRGB(255, 255, 255)
HP1.TextSize = 17.000

SuperCharger1.Name = "SuperCharger1"
SuperCharger1.Parent = TunnerFrame
SuperCharger1.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
SuperCharger1.BackgroundTransparency = 1.000
SuperCharger1.BorderColor3 = Color3.fromRGB(0, 0, 0)
SuperCharger1.BorderSizePixel = 0
SuperCharger1.Position = UDim2.new(-0.000357759913, 0, 0.409090906, 0)
SuperCharger1.Size = UDim2.new(0, 110, 0, 31)
SuperCharger1.Font = Enum.Font.Arial
SuperCharger1.Text = "SuperCharger Amount"
SuperCharger1.TextColor3 = Color3.fromRGB(255, 255, 255)
SuperCharger1.TextScaled = true
SuperCharger1.TextSize = 17.000
SuperCharger1.TextWrapped = true

SuperCharger.Name = "SuperCharger"
SuperCharger.Parent = TunnerFrame
SuperCharger.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
SuperCharger.BorderColor3 = Color3.fromRGB(0, 0, 0)
SuperCharger.BorderSizePixel = 0
SuperCharger.Position = UDim2.new(0.0947359502, 0, 0.538687229, 0)
SuperCharger.Size = UDim2.new(0, 48, 0, 26)
SuperCharger.Font = Enum.Font.SourceSans
SuperCharger.Text = ""
SuperCharger.TextColor3 = Color3.fromRGB(0, 0, 0)
SuperCharger.TextSize = 14.000

SuperChargerBoost1.Name = "SuperChargerBoost1"
SuperChargerBoost1.Parent = TunnerFrame
SuperChargerBoost1.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
SuperChargerBoost1.BackgroundTransparency = 1.000
SuperChargerBoost1.BorderColor3 = Color3.fromRGB(0, 0, 0)
SuperChargerBoost1.BorderSizePixel = 0
SuperChargerBoost1.Position = UDim2.new(0.658103764, 0, 0.413223147, 0)
SuperChargerBoost1.Size = UDim2.new(0, 110, 0, 31)
SuperChargerBoost1.Font = Enum.Font.Arial
SuperChargerBoost1.Text = "SuperCharger Boost"
SuperChargerBoost1.TextColor3 = Color3.fromRGB(255, 255, 255)
SuperChargerBoost1.TextScaled = true
SuperChargerBoost1.TextSize = 17.000
SuperChargerBoost1.TextWrapped = true

SuperChargerBoost.Name = "SuperChargerBoost"
SuperChargerBoost.Parent = TunnerFrame
SuperChargerBoost.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
SuperChargerBoost.BorderColor3 = Color3.fromRGB(0, 0, 0)
SuperChargerBoost.BorderSizePixel = 0
SuperChargerBoost.Position = UDim2.new(0.753197491, 0, 0.538687229, 0)
SuperChargerBoost.Size = UDim2.new(0, 48, 0, 26)
SuperChargerBoost.Font = Enum.Font.SourceSans
SuperChargerBoost.Text = ""
SuperChargerBoost.TextColor3 = Color3.fromRGB(0, 0, 0)
SuperChargerBoost.TextSize = 14.000

TurboCharger1.Name = "TurboCharger1"
TurboCharger1.Parent = TunnerFrame
TurboCharger1.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
TurboCharger1.BackgroundTransparency = 1.000
TurboCharger1.BorderColor3 = Color3.fromRGB(0, 0, 0)
TurboCharger1.BorderSizePixel = 0
TurboCharger1.Position = UDim2.new(-0.000357759913, 0, 0.673553705, 0)
TurboCharger1.Size = UDim2.new(0, 110, 0, 31)
TurboCharger1.Font = Enum.Font.Arial
TurboCharger1.Text = "TurboCharger Amount"
TurboCharger1.TextColor3 = Color3.fromRGB(255, 255, 255)
TurboCharger1.TextScaled = true
TurboCharger1.TextSize = 17.000
TurboCharger1.TextWrapped = true

TurboCharger.Name = "TurboCharger"
TurboCharger.Parent = TunnerFrame
TurboCharger.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
TurboCharger.BorderColor3 = Color3.fromRGB(0, 0, 0)
TurboCharger.BorderSizePixel = 0
TurboCharger.Position = UDim2.new(0.0947359502, 0, 0.799017787, 0)
TurboCharger.Size = UDim2.new(0, 48, 0, 26)
TurboCharger.Font = Enum.Font.SourceSans
TurboCharger.Text = ""
TurboCharger.TextColor3 = Color3.fromRGB(0, 0, 0)
TurboCharger.TextSize = 14.000

TurboChargerBoost1.Name = "TurboChargerBoost1"
TurboChargerBoost1.Parent = TunnerFrame
TurboChargerBoost1.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
TurboChargerBoost1.BackgroundTransparency = 1.000
TurboChargerBoost1.BorderColor3 = Color3.fromRGB(0, 0, 0)
TurboChargerBoost1.BorderSizePixel = 0
TurboChargerBoost1.Position = UDim2.new(0.661180675, 0, 0.673553705, 0)
TurboChargerBoost1.Size = UDim2.new(0, 110, 0, 31)
TurboChargerBoost1.Font = Enum.Font.Arial
TurboChargerBoost1.Text = "TurboCharger Boost"
TurboChargerBoost1.TextColor3 = Color3.fromRGB(255, 255, 255)
TurboChargerBoost1.TextScaled = true
TurboChargerBoost1.TextSize = 17.000
TurboChargerBoost1.TextWrapped = true

TurboChargerBoost.Name = "TurboChargerBoost"
TurboChargerBoost.Parent = TunnerFrame
TurboChargerBoost.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
TurboChargerBoost.BorderColor3 = Color3.fromRGB(0, 0, 0)
TurboChargerBoost.BorderSizePixel = 0
TurboChargerBoost.Position = UDim2.new(0.756274402, 0, 0.799017787, 0)
TurboChargerBoost.Size = UDim2.new(0, 48, 0, 26)
TurboChargerBoost.Font = Enum.Font.SourceSans
TurboChargerBoost.Text = ""
TurboChargerBoost.TextColor3 = Color3.fromRGB(0, 0, 0)
TurboChargerBoost.TextSize = 14.000

ResetTune.Name = "ResetTune"
ResetTune.Parent = TunnerFrame
ResetTune.BackgroundColor3 = Color3.fromRGB(50, 50, 50)
ResetTune.BorderColor3 = Color3.fromRGB(0, 0, 0)
ResetTune.BorderSizePixel = 0
ResetTune.Position = UDim2.new(0.37846154, 0, 0.570247948, 0)
ResetTune.Size = UDim2.new(0, 79, 0, 32)
ResetTune.Font = Enum.Font.Arial
ResetTune.Text = "Reset Tune"
ResetTune.TextColor3 = Color3.fromRGB(255, 255, 255)
ResetTune.TextScaled = true
ResetTune.TextSize = 17.000
ResetTune.TextWrapped = true

UICorner.Parent = ResetTune

SetTune.Name = "SetTune"
SetTune.Parent = TunnerFrame
SetTune.BackgroundColor3 = Color3.fromRGB(50, 50, 50)
SetTune.BorderColor3 = Color3.fromRGB(0, 0, 0)
SetTune.BorderSizePixel = 0
SetTune.Position = UDim2.new(0.37846154, 0, 0.359504133, 0)
SetTune.Size = UDim2.new(0, 79, 0, 32)
SetTune.Font = Enum.Font.Arial
SetTune.Text = "Tuning...!"
SetTune.TextColor3 = Color3.fromRGB(255, 255, 255)
SetTune.TextScaled = true
SetTune.TextSize = 17.000
SetTune.TextWrapped = true

UICorner_2.Parent = SetTune

ConfigFrame.Name = "ConfigFrame"
ConfigFrame.Parent = Tuning
ConfigFrame.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
ConfigFrame.BorderColor3 = Color3.fromRGB(0, 0, 0)
ConfigFrame.BorderSizePixel = 0
ConfigFrame.Position = UDim2.new(0, 0, 1, 0)
ConfigFrame.Size = UDim2.new(0, 136, 0, 104)

SaveConfig.Name = "SaveConfig"
SaveConfig.Parent = ConfigFrame
SaveConfig.BackgroundColor3 = Color3.fromRGB(50, 50, 50)
SaveConfig.BorderColor3 = Color3.fromRGB(0, 0, 0)
SaveConfig.BorderSizePixel = 0
SaveConfig.Position = UDim2.new(0.0882352963, 0, 0.360000014, 0)
SaveConfig.Size = UDim2.new(0, 111, 0, 27)
SaveConfig.Font = Enum.Font.Arial
SaveConfig.Text = "Save Tuning"
SaveConfig.TextColor3 = Color3.fromRGB(255, 255, 255)
SaveConfig.TextScaled = true
SaveConfig.TextSize = 17.000
SaveConfig.TextWrapped = true

UICorner_3.Parent = SaveConfig

DeleteConfig.Name = "DeleteConfig"
DeleteConfig.Parent = ConfigFrame
DeleteConfig.BackgroundColor3 = Color3.fromRGB(50, 50, 50)
DeleteConfig.BorderColor3 = Color3.fromRGB(0, 0, 0)
DeleteConfig.BorderSizePixel = 0
DeleteConfig.Position = UDim2.new(0.0808823556, 0, 0.701153696, 0)
DeleteConfig.Size = UDim2.new(0, 112, 0, 24)
DeleteConfig.Font = Enum.Font.Arial
DeleteConfig.Text = "Delete Tuning"
DeleteConfig.TextColor3 = Color3.fromRGB(255, 255, 255)
DeleteConfig.TextScaled = true
DeleteConfig.TextSize = 17.000
DeleteConfig.TextWrapped = true

UICorner_4.Parent = DeleteConfig

TuningFileName.Name = "TuningFileName"
TuningFileName.Parent = ConfigFrame
TuningFileName.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
TuningFileName.BorderColor3 = Color3.fromRGB(0, 0, 0)
TuningFileName.BorderSizePixel = 0
TuningFileName.Position = UDim2.new(0.0735294148, 0, 0.0473078229, 0)
TuningFileName.Size = UDim2.new(0, 121, 0, 27)
TuningFileName.Font = Enum.Font.SourceSans
TuningFileName.Text = ""
TuningFileName.TextColor3 = Color3.fromRGB(0, 0, 0)
TuningFileName.TextSize = 14.000

LoadConfig.Name = "LoadConfig"
LoadConfig.Parent = ConfigFrame
LoadConfig.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
LoadConfig.BorderColor3 = Color3.fromRGB(0, 0, 0)
LoadConfig.BorderSizePixel = 0
LoadConfig.Position = UDim2.new(3.40441179, 0, -1.32692313, 0)
LoadConfig.Size = UDim2.new(0, 117, 0, 242)

Template.Name = "Template"
Template.Parent = LoadConfig
Template.BackgroundColor3 = Color3.fromRGB(50, 50, 50)
Template.BorderColor3 = Color3.fromRGB(0, 0, 0)
Template.BorderSizePixel = 0
Template.Position = UDim2.new(0.0421961583, 0, 0.0069388398, 0)
Template.Size = UDim2.new(0, 112, 0, 24)
Template.Visible = false
Template.Font = Enum.Font.Arial
Template.Text = ""
Template.TextColor3 = Color3.fromRGB(255, 255, 255)
Template.TextScaled = true
Template.TextSize = 17.000
Template.TextWrapped = true

UICorner_5.Parent = Template

Other.Name = "Other"
Other.Parent = ConfigFrame
Other.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
Other.BorderColor3 = Color3.fromRGB(0, 0, 0)
Other.BorderSizePixel = 0
Other.Position = UDim2.new(3.40441179, 0, -1.625, 0)
Other.Size = UDim2.new(0, 117, 0, 31)

Template_2.Name = "Template"
Template_2.Parent = Other
Template_2.BackgroundColor3 = Color3.fromRGB(50, 50, 50)
Template_2.BorderColor3 = Color3.fromRGB(0, 0, 0)
Template_2.BorderSizePixel = 0
Template_2.Position = UDim2.new(0.0421961583, 0, 0.0069388398, 0)
Template_2.Size = UDim2.new(0, 112, 0, 24)
Template_2.Visible = false
Template_2.Font = Enum.Font.Arial
Template_2.Text = ""
Template_2.TextColor3 = Color3.fromRGB(255, 255, 255)
Template_2.TextScaled = true
Template_2.TextSize = 17.000
Template_2.TextWrapped = true

UICorner_6.Parent = Template_2

ConfigTune.Name = "Config Tune"
ConfigTune.Parent = Other
ConfigTune.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
ConfigTune.BackgroundTransparency = 1.000
ConfigTune.BorderColor3 = Color3.fromRGB(0, 0, 0)
ConfigTune.BorderSizePixel = 0
ConfigTune.Position = UDim2.new(-0.273519933, 0, -0.0313248187, 0)
ConfigTune.Size = UDim2.new(0, 189, 0, 31)
ConfigTune.Font = Enum.Font.Arial
ConfigTune.Text = "Config Tune"
ConfigTune.TextColor3 = Color3.fromRGB(255, 255, 255)
ConfigTune.TextSize = 17.000

Pembatas.Name = "Pembatas"
Pembatas.Parent = Tuning

PEMBATAS.Name = "PEMBATAS"
PEMBATAS.Parent = Pembatas
PEMBATAS.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
PEMBATAS.BorderColor3 = Color3.fromRGB(0, 0, 0)
PEMBATAS.BorderSizePixel = 0
PEMBATAS.Position = UDim2.new(1.5, 0, -0.00724637695, 0)
PEMBATAS.Size = UDim2.new(0, -465, 0, -6)
PEMBATAS.Font = Enum.Font.SourceSans
PEMBATAS.Text = ""
PEMBATAS.TextColor3 = Color3.fromRGB(0, 0, 0)
PEMBATAS.TextSize = 14.000

PEMBATAS_2.Name = "PEMBATAS"
PEMBATAS_2.Parent = Pembatas
PEMBATAS_2.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
PEMBATAS_2.BorderColor3 = Color3.fromRGB(0, 0, 0)
PEMBATAS_2.BorderSizePixel = 0
PEMBATAS_2.Position = UDim2.new(1.5, 0, 1.7971015, 0)
PEMBATAS_2.Size = UDim2.new(0, -465, 0, -6)
PEMBATAS_2.Font = Enum.Font.SourceSans
PEMBATAS_2.Text = ""
PEMBATAS_2.TextColor3 = Color3.fromRGB(0, 0, 0)
PEMBATAS_2.TextSize = 14.000

PEMBATAS_3.Name = "PEMBATAS"
PEMBATAS_3.Parent = Pembatas
PEMBATAS_3.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
PEMBATAS_3.BorderColor3 = Color3.fromRGB(0, 0, 0)
PEMBATAS_3.BorderSizePixel = 0
PEMBATAS_3.Position = UDim2.new(0.0032258064, 0, -0.0507246368, 0)
PEMBATAS_3.Size = UDim2.new(0, -4, 0, 255)
PEMBATAS_3.Font = Enum.Font.SourceSans
PEMBATAS_3.Text = ""
PEMBATAS_3.TextColor3 = Color3.fromRGB(0, 0, 0)
PEMBATAS_3.TextSize = 14.000

PEMBATAS_4.Name = "PEMBATAS"
PEMBATAS_4.Parent = Pembatas
PEMBATAS_4.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
PEMBATAS_4.BorderColor3 = Color3.fromRGB(0, 0, 0)
PEMBATAS_4.BorderSizePixel = 0
PEMBATAS_4.Position = UDim2.new(1.87096775, 0, -0.224637687, 0)
PEMBATAS_4.Size = UDim2.new(0, -4, 0, 277)
PEMBATAS_4.Font = Enum.Font.SourceSans
PEMBATAS_4.Text = ""
PEMBATAS_4.TextColor3 = Color3.fromRGB(0, 0, 0)
PEMBATAS_4.TextSize = 14.000

PEMBATAS_5.Name = "PEMBATAS"
PEMBATAS_5.Parent = Pembatas
PEMBATAS_5.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
PEMBATAS_5.BorderColor3 = Color3.fromRGB(0, 0, 0)
PEMBATAS_5.BorderSizePixel = 0
PEMBATAS_5.Position = UDim2.new(1.50645161, 0, -0.231674418, 0)
PEMBATAS_5.Size = UDim2.new(0, -4, 0, 279)
PEMBATAS_5.Font = Enum.Font.SourceSans
PEMBATAS_5.Text = ""
PEMBATAS_5.TextColor3 = Color3.fromRGB(0, 0, 0)
PEMBATAS_5.TextSize = 14.000

PEMBATAS_6.Name = "PEMBATAS"
PEMBATAS_6.Parent = Pembatas
PEMBATAS_6.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
PEMBATAS_6.BorderColor3 = Color3.fromRGB(0, 0, 0)
PEMBATAS_6.BorderSizePixel = 0
PEMBATAS_6.Position = UDim2.new(1.87096775, 0, 1.73934007, 0)
PEMBATAS_6.Size = UDim2.new(0, -115, 0, 9)
PEMBATAS_6.Font = Enum.Font.SourceSans
PEMBATAS_6.Text = ""
PEMBATAS_6.TextColor3 = Color3.fromRGB(0, 0, 0)
PEMBATAS_6.TextSize = 14.000

PEMBATAS_7.Name = "PEMBATAS"
PEMBATAS_7.Parent = Pembatas
PEMBATAS_7.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
PEMBATAS_7.BorderColor3 = Color3.fromRGB(0, 0, 0)
PEMBATAS_7.BorderSizePixel = 0
PEMBATAS_7.Position = UDim2.new(1.87096775, 0, -0.296891809, 0)
PEMBATAS_7.Size = UDim2.new(0, -117, 0, 9)
PEMBATAS_7.Font = Enum.Font.SourceSans
PEMBATAS_7.Text = ""
PEMBATAS_7.TextColor3 = Color3.fromRGB(0, 0, 0)
PEMBATAS_7.TextSize = 14.000

Notif.Name = "Notif"
Notif.Parent = Open
Notif.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Notif.BackgroundTransparency = 1.000
Notif.BorderColor3 = Color3.fromRGB(0, 0, 0)
Notif.BorderSizePixel = 0
Notif.Position = UDim2.new(0.748387098, 0, 0.224637687, 0)
Notif.Size = UDim2.new(0, 136, 0, 50)
Notif.Visible = false
Notif.Font = Enum.Font.Arial
Notif.Text = ""
Notif.TextColor3 = Color3.fromRGB(255, 255, 255)
Notif.TextScaled = true
Notif.TextSize = 17.000
Notif.TextWrapped = true

usnBtn.Name = "usnBtn"
usnBtn.Parent = Open
usnBtn.BackgroundColor3 = Color3.fromRGB(50, 50, 50)
usnBtn.BorderColor3 = Color3.fromRGB(0, 0, 0)
usnBtn.BorderSizePixel = 0
usnBtn.Position = UDim2.new(0.0612903237, 0, 0.5, 0)
usnBtn.Size = UDim2.new(0, 102, 0, 25)
usnBtn.Font = Enum.Font.Arial
usnBtn.Text = "☑ LocalName"
usnBtn.TextColor3 = Color3.fromRGB(255, 255, 255)
usnBtn.TextSize = 17.000

UICorner_7.Parent = usnBtn

RND.Name = "RND"
RND.Parent = Open
RND.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
RND.BackgroundTransparency = 1.000
RND.BorderColor3 = Color3.fromRGB(0, 0, 0)
RND.BorderSizePixel = 0
RND.Position = UDim2.new(-0.0516129024, 0, 0.855072439, 0)
RND.Size = UDim2.new(0, 120, 0, 24)
RND.Font = Enum.Font.Arial
RND.Text = "File Name"
RND.TextColor3 = Color3.fromRGB(255, 255, 255)
RND.TextSize = 17.000

OpenFrame.Name = "OpenFrame"
OpenFrame.Parent = cedit
OpenFrame.BackgroundColor3 = Color3.fromRGB(102, 110, 117)
OpenFrame.BorderColor3 = Color3.fromRGB(0, 0, 0)
OpenFrame.BorderSizePixel = 0
OpenFrame.Position = UDim2.new(0.122282609, 0, 0.443946183, 0)
OpenFrame.Size = UDim2.new(0, 85, 0, 79)
OpenFrame.Image = "rbxassetid://111851901427385"

UICorner_8.CornerRadius = UDim.new(2, 0)
UICorner_8.Parent = OpenFrame

-- Scripts:

local function CCSH_fake_script() -- Open.drg 
	local script = Instance.new('LocalScript', Open)

	local frame = script.Parent
	local UserInputService = game:GetService("UserInputService")
	
	local dragging = false
	local dragStart
	local startPos
	
	local function update(input)
		local delta = input.Position - dragStart
		frame.Position = UDim2.new(
			startPos.X.Scale,
			startPos.X.Offset + delta.X,
			startPos.Y.Scale,
			startPos.Y.Offset + delta.Y
		)
	end
	
	frame.InputBegan:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseButton1 then
			dragging = true
			dragStart = input.Position
			startPos = frame.Position
	
			input.Changed:Connect(function()
				if input.UserInputState == Enum.UserInputState.End then
					dragging = false
				end
			end)
		end
	end)
	
	frame.InputChanged:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseMovement then
			if dragging then
				update(input)
			end
		end
	end)
	
end
coroutine.wrap(CCSH_fake_script)()
local function HUZOQAQ_fake_script() -- Open.handler 
	local script = Instance.new('LocalScript', Open)

	--[[ FRAME / BUTTON / TEXTBOX HANDLER ]]
	
	local Username_TBName1 = ""
	local UsernameBtn_TB = script.Parent:WaitForChild("usnBtn")
	local USNNN = script.Parent:WaitForChild("usn")
	
	if UsernameBtn_TB.Text == "□ LocalName" then
		Username_TBName1 = USNNN.Text
	elseif UsernameBtn_TB.Text == "☑ LocalName" then
		local player = game.Players.LocalPlayer
		Username_TBName1 = player.Name
	end
	
	local notif = script.Parent:WaitForChild("Notif")
	
	local function Notification (typesd, text)
		if typesd == "Warn" then
			notif.Text = text
			notif.TextColor3 = Color3.fromRGB(255, 255, 0)
			notif.Visible = true
			wait(5)
			notif.Visible = false
		elseif typesd == "Err" then
			notif.Text = text
			notif.TextColor3 = Color3.fromRGB(255, 0, 0)
			notif.Visible = true
			wait(5)
			notif.Visible = false
		elseif typesd == "Info" then
			notif.Text = text
			notif.TextColor3 = Color3.fromRGB(255, 255, 255)
			notif.Visible = true
			wait(5)
			notif.Visible = false
		end
	end
	
	local Tuner = script.Parent:WaitForChild("Tuning"):WaitForChild("TunnerFrame")
	
	--local Brake_TB = Tuner:WaitForChild("Brake")
	local HP_TB = Tuner:WaitForChild("HP")
	local SuperCharger_TB = Tuner:WaitForChild("SuperChargerBoost")
	local SuperChargerAmount_TB = Tuner:WaitForChild("SuperCharger")
	local TurboCharger_TB = Tuner:WaitForChild("TurboChargerBoost")
	local TurboChargerAmount_TB = Tuner:WaitForChild("TurboCharger")
	
	local SetTuner = Tuner:WaitForChild("SetTune")
	local ResetTune = Tuner:WaitForChild("ResetTune")
	
	--[[ END FRAME / BUTTON / TEXTBOX HANDLER ]]
	
	--[[ Reset Tune Handler ]]
	
	local username_s1 = ""
	local brake_s1 = 0
	local hp_s1 = 0
	local sc_s1 = 0
	local scAmount_s1 = 0
	local tc_s1 = 0
	local tcAmount_s1 = 0
	
	--[[ End Reset Tune Handler ]]
	
	local function ButtonHandler (bool)
		SetTuner.Visible = bool
		ResetTune.Visible = bool
	end
	
	local function Tunererr (username_s2, hp_s2, sc_s2, scAmount_s2, tc_s2, tcAmount_s2, tunertype)
		
		print(Username_TBName1)
		
		if Username_TBName1 == "" then
			ButtonHandler(true)
			Notification("Warn", "Gagal mendapatkan Data Mobil, Username tidak terdeteksi / kosong!")
			return
		end
		--[[if Brake_TB.Text == "" then
			ButtonHandler(true)
			Notification("Warn", "Gagal mentuning Brake, Angka tidak terdeteksi!")
			return
		end]]
		if HP_TB.Text == "" then
			ButtonHandler(true)
			Notification("Warn", "Gagal mentuning HorsePower, Angka tidak terdeteksi!")
			return
		end
		if SuperCharger_TB.Text == "" then
			ButtonHandler(true)
			Notification("Warn", "Gagal mentuning SuperCharger, Angka tidak terdeteksi!")
			return
		end
		if SuperChargerAmount_TB.Text == "" then
			ButtonHandler(true)
			Notification("Warn", "Gagal mentuning SuperCharger Amount, Angka tidak terdeteksi!")
			return
		end
		if TurboCharger_TB.Text == "" then
			ButtonHandler(true)
			Notification("Warn", "Gagal mentuning TurboCharger, Angka tidak terdeteksi!")
			return
		end
		if TurboChargerAmount_TB.Text == "" then
			ButtonHandler(true)
			Notification("Warn", "Gagal mentuning TurboCharger Amount, Angka tidak terdeteksi!")
			return
		end
		
		print("Starting tuner...")
		
		print(Username_TBName1)
	
		local playerName = Username_TBName1
		local ws_Car = workspace:FindFirstChild("Vehicles") and workspace.Vehicles:FindFirstChild(playerName.."sCar")
	
		if not ws_Car then
			warn("File mobil ga ketemu di ", playerName.."sCar")
			ButtonHandler(true)
			return
		end
	
		local function safeGet(parent, childName)
			if not parent then
				ButtonHandler(true)
				return nil
			end
			local obj = parent:FindFirstChild(childName)
			if not obj then
				warn(childName.." diskip, ga nemu.")
				ButtonHandler(true)
			end
			return obj
		end
	
		local ReadOnly       = ws_Car:FindFirstChild("ReadOnly")
		local Customizeable  = ws_Car:FindFirstChild("Customizeable")
		local PowerFolder    = ws_Car:FindFirstChild("Power")
	
		if not ReadOnly then warn("ReadOnly ga ketemu") end
		if not Customizeable then warn("Customizeable ga ketemu") end
		if not PowerFolder then warn("Power ga ketemu") end
	
		--local RO_brake      = safeGet(ReadOnly, "BrakeForce")
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
			--brake_s1 = RO_brake.Value
			hp_s1 = HP_brake.Value
			sc_s1 = SB_brake.Value
			scAmount_s1 = SC_brake.Value
			tc_s1 = TB_brake.Value
			tcAmount_s1 = Turbo_brake.Value
			
			tune(HP_brake, hp_s2)
			tune(SB_brake, sc_s2)
			tune(SC_brake, scAmount_s2)
			tune(TB_brake, tc_s2)
			tune(Turbo_brake, tcAmount_s2)
			Notification("Info", "Tuned...!!!")
			print("Tuned...!!!")
			--tune(Customizeable_HP, 9999)
			--tune(Powerss, 9999)
		elseif tunertype == "Reset" then
			--tune(RO_brake, brake_s1)
			tune(HP_brake, hp_s1)
			tune(SB_brake, sc_s1)
			tune(SC_brake, scAmount_s1)
			tune(TB_brake, tc_s1)
			tune(Turbo_brake, tcAmount_s1)
			
			brake_s1 = 0
			hp_s1 = 0
			sc_s1 = 0
			scAmount_s1 = 0
			tc_s1 = 0
			tcAmount_s1 = 0
			Notification("Info", "Tune Reseted...!!!")
			print("Tune Reseted...!!!")
		end
		
		ButtonHandler(true)
	end
	
	SetTuner.MouseButton1Click:Connect(function()
		ButtonHandler(false)
		Tunererr(Username_TBName1, HP_TB.Text, SuperCharger_TB.Text, SuperChargerAmount_TB.Text, TurboCharger_TB.Text, TurboChargerAmount_TB.Text, "Set")
	end)
	
	ResetTune.MouseButton1Click:Connect(function()
		ButtonHandler(false)
		Tunererr(username_s1, hp_s1, sc_s1, scAmount_s1, tc_s1, tcAmount_s1, "Reset")
	end)
end
coroutine.wrap(HUZOQAQ_fake_script)()
local function NRPWHK_fake_script() -- usn.usner 
	local script = Instance.new('LocalScript', usn)

	local label = script.Parent
	local player = game.Players.LocalPlayer
	label.Text = player.Name
end
coroutine.wrap(NRPWHK_fake_script)()
local function VUIXD_fake_script() -- Tuning.PembatasFrame 
	local script = Instance.new('LocalScript', Tuning)

	local RunService = game:GetService("RunService")
	local folder = script.Parent:WaitForChild("Pembatas")
	
	local pembatas = {}
	for _, obj in ipairs(folder:GetChildren()) do
		if (obj:IsA("Frame") or obj:IsA("TextLabel") or obj:IsA("TextButton")) and obj.Name == "PEMBATAS" then
			table.insert(pembatas, obj)
		end
	end
	
	local hue = 0
	
	RunService.RenderStepped:Connect(function()
		hue = (hue + 0.003) % 1
		local color = Color3.fromHSV(hue, 1, 1)
		for _, item in ipairs(pembatas) do
			item.BackgroundColor3 = color
		end
	end)
	
end
coroutine.wrap(VUIXD_fake_script)()
local function BDSC_fake_script() -- Brake.number 
	local script = Instance.new('LocalScript', Brake)

	local textbox = script.Parent
	
	textbox:GetPropertyChangedSignal("Text"):Connect(function()
		local filtered = textbox.Text:gsub("%D", "")
		if #filtered > 6 then
			filtered = filtered:sub(1, 6)
		end
		textbox.Text = filtered
	end)
	
end
coroutine.wrap(BDSC_fake_script)()
local function MSKVGUN_fake_script() -- HP.number 
	local script = Instance.new('LocalScript', HP)

	local textbox = script.Parent
	
	textbox:GetPropertyChangedSignal("Text"):Connect(function()
		local filtered = textbox.Text:gsub("%D", "")
		if #filtered > 6 then
			filtered = filtered:sub(1, 6)
		end
		textbox.Text = filtered
	end)
	
end
coroutine.wrap(MSKVGUN_fake_script)()
local function JUGTA_fake_script() -- SuperCharger.number 
	local script = Instance.new('LocalScript', SuperCharger)

	local textbox = script.Parent
	
	textbox:GetPropertyChangedSignal("Text"):Connect(function()
		local filtered = textbox.Text:gsub("%D", "")
		if #filtered > 6 then
			filtered = filtered:sub(1, 6)
		end
		textbox.Text = filtered
	end)
	
end
coroutine.wrap(JUGTA_fake_script)()
local function UWMPWXR_fake_script() -- SuperChargerBoost.number 
	local script = Instance.new('LocalScript', SuperChargerBoost)

	local textbox = script.Parent
	
	textbox:GetPropertyChangedSignal("Text"):Connect(function()
		local filtered = textbox.Text:gsub("%D", "")
		if #filtered > 6 then
			filtered = filtered:sub(1, 6)
		end
		textbox.Text = filtered
	end)
	
end
coroutine.wrap(UWMPWXR_fake_script)()
local function YQCFZX_fake_script() -- TurboCharger.number 
	local script = Instance.new('LocalScript', TurboCharger)

	local textbox = script.Parent
	
	textbox:GetPropertyChangedSignal("Text"):Connect(function()
		local filtered = textbox.Text:gsub("%D", "")
		if #filtered > 6 then
			filtered = filtered:sub(1, 6)
		end
		textbox.Text = filtered
	end)
	
end
coroutine.wrap(YQCFZX_fake_script)()
local function OLWZRWA_fake_script() -- TurboChargerBoost.number 
	local script = Instance.new('LocalScript', TurboChargerBoost)

	local textbox = script.Parent
	
	textbox:GetPropertyChangedSignal("Text"):Connect(function()
		local filtered = textbox.Text:gsub("%D", "")
		if #filtered > 6 then
			filtered = filtered:sub(1, 6)
		end
		textbox.Text = filtered
	end)
	
end
coroutine.wrap(OLWZRWA_fake_script)()
local function ZYMLULA_fake_script() -- LoadConfig.LocalScript 
	local script = Instance.new('LocalScript', LoadConfig)

	local frame = script.Parent
	local template = frame.Template
	
	local falsed = true
	if falsed == true then return end
	
	local list = {
		-- MAX 8
	}
	
	local yOffset = 0
	
	for i, name in ipairs(list) do
		local item = template:Clone()
		item.Visible = true
		item.Parent = frame
	
		item.Text = i .. ". " .. name
		item.Position = UDim2.new(0, 0, 0, yOffset)
	
		yOffset = yOffset + item.AbsoluteSize.Y + 5
	
		item.MouseButton1Click:Connect(function()
		end)
	end
	
end
coroutine.wrap(ZYMLULA_fake_script)()
local function NKNWRYY_fake_script() -- Other.LocalScript 
	local script = Instance.new('LocalScript', Other)

	local frame = script.Parent
	local template = frame.Template
	
	local falsed = true
	if falsed == true then return end
	
	local list = {
		-- MAX 8
	}
	
	local yOffset = 0
	
	for i, name in ipairs(list) do
		local item = template:Clone()
		item.Visible = true
		item.Parent = frame
	
		item.Text = i .. ". " .. name
		item.Position = UDim2.new(0, 0, 0, yOffset)
	
		yOffset = yOffset + item.AbsoluteSize.Y + 5
	
		item.MouseButton1Click:Connect(function()
		end)
	end
	
end
coroutine.wrap(NKNWRYY_fake_script)()
local function UJHNT_fake_script() -- usnBtn.usnBtnHandler 
	local script = Instance.new('LocalScript', usnBtn)

	local button = script.Parent
	local usnLabel = script.Parent.Parent:WaitForChild("usn")
	
	local label = script.Parent
	local player = game.Players.LocalPlayer
	
	button.MouseButton1Click:Connect(function()
		if button.Text == "□ LocalName" then
			if usnLabel.Text ~= player.Name then
				usnLabel.Text = player.Name
			end
			button.Text = "☑ LocalName"
			usnLabel.TextEditable = false
			usnLabel.ClearTextOnFocus = false
		elseif button.Text == "☑ LocalName" then
			button.Text = "□ LocalName"
			usnLabel.TextEditable = true
			usnLabel.ClearTextOnFocus = true
		end
	end)
end
coroutine.wrap(UJHNT_fake_script)()
local function EHOHVOD_fake_script() -- OpenFrame.callframe 
	local script = Instance.new('LocalScript', OpenFrame)

	local button = script.Parent
	local frame = button.Parent:WaitForChild("Open")
	
	button.MouseButton1Click:Connect(function()
		if frame.Visible == false then
			frame.Visible = true
		else
			frame.Visible = false
		end
	end)
end
coroutine.wrap(EHOHVOD_fake_script)()
local function GXRXB_fake_script() -- OpenFrame.drg 
	local script = Instance.new('LocalScript', OpenFrame)

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
	
end
coroutine.wrap(GXRXB_fake_script)()
