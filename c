-- Gui to Lua
-- Version: 3.2

-- Instances:

local cedit = Instance.new("ScreenGui")
local Open = Instance.new("Frame")
local usn = Instance.new("TextBox")
local usn1 = Instance.new("TextLabel")
local PEMBATAS = Instance.new("TextLabel")
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
local UIGradient = Instance.new("UIGradient")
local Notif = Instance.new("TextLabel")
local usnBtn = Instance.new("TextButton")
local UICorner_3 = Instance.new("UICorner")
local OpenFrame = Instance.new("TextButton")
local UICorner_4 = Instance.new("UICorner")

--Properties:

cedit.Name = "cedit"
cedit.Parent = game.Players.LocalPlayer:WaitForChild("PlayerGui")
cedit.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

Open.Name = "Open"
Open.Parent = cedit
Open.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
Open.BorderColor3 = Color3.fromRGB(0, 0, 0)
Open.BorderSizePixel = 0
Open.Position = UDim2.new(0.193840578, 0, 0.369610965, 0)
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

PEMBATAS.Name = "PEMBATAS"
PEMBATAS.Parent = Open
PEMBATAS.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
PEMBATAS.BorderColor3 = Color3.fromRGB(0, 0, 0)
PEMBATAS.BorderSizePixel = 0
PEMBATAS.Position = UDim2.new(0.438709676, 0, 0, 0)
PEMBATAS.Size = UDim2.new(0, 2, 0, 138)
PEMBATAS.Font = Enum.Font.SourceSans
PEMBATAS.Text = ""
PEMBATAS.TextColor3 = Color3.fromRGB(0, 0, 0)
PEMBATAS.TextSize = 14.000

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

UIGradient.Color = ColorSequence.new{ColorSequenceKeypoint.new(0.00, Color3.fromRGB(74, 255, 243)), ColorSequenceKeypoint.new(1.00, Color3.fromRGB(74, 255, 243))}
UIGradient.Parent = Open

Notif.Name = "Notif"
Notif.Parent = Open
Notif.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Notif.BackgroundTransparency = 1.000
Notif.BorderColor3 = Color3.fromRGB(0, 0, 0)
Notif.BorderSizePixel = 0
Notif.Position = UDim2.new(0, 0, 0.637681186, 0)
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
usnBtn.Text = "□ LocalName"
usnBtn.TextColor3 = Color3.fromRGB(255, 255, 255)
usnBtn.TextSize = 17.000

UICorner_3.Parent = usnBtn

OpenFrame.Name = "OpenFrame"
OpenFrame.Parent = cedit
OpenFrame.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
OpenFrame.BorderColor3 = Color3.fromRGB(0, 0, 0)
OpenFrame.BorderSizePixel = 0
OpenFrame.Position = UDim2.new(0.15126811, 0, 0.489550531, 0)
OpenFrame.Size = UDim2.new(0, 41, 0, 33)
OpenFrame.Font = Enum.Font.Arial
OpenFrame.Text = "+"
OpenFrame.TextColor3 = Color3.fromRGB(255, 255, 255)
OpenFrame.TextSize = 17.000

UICorner_4.CornerRadius = UDim.new(2, 0)
UICorner_4.Parent = OpenFrame

-- Scripts:

local function NIZBDWH_fake_script() -- Open.scRGBCorner 
	local script = Instance.new('LocalScript', Open)

	local gradient = script.Parent:WaitForChild("UIGradient")
	
	while true do
		for i = 0, 1, 0.005 do
			gradient.Rotation = i * 360
			task.wait(0.01)
		end
	end
end
coroutine.wrap(NIZBDWH_fake_script)()
local function JKEYBT_fake_script() -- Open.drg 
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
coroutine.wrap(JKEYBT_fake_script)()
local function OOQWLMG_fake_script() -- Open.handler 
	local script = Instance.new('LocalScript', Open)

	--[[ FRAME / BUTTON / TEXTBOX HANDLER ]]
	
	local Username_TBName1 = ""
	local UsernameBtn_TB = script.Parent:WaitForChild("usnBtn")
	
	if UsernameBtn_TB.Text == "□ LocalName" then
		Username_TBName1 = script.Parent:WaitForChild("usn")
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
		Tunererr(username_s1, brake_s1, hp_s1, sc_s1, scAmount_s1, tc_s1, tcAmount_s1, "Reset")
	end)
end
coroutine.wrap(OOQWLMG_fake_script)()
local function ZAMWLC_fake_script() -- usn.usner 
	local script = Instance.new('LocalScript', usn)

	local label = script.Parent
	local player = game.Players.LocalPlayer
	label.Text = player.Name
end
coroutine.wrap(ZAMWLC_fake_script)()
local function HQOYLWG_fake_script() -- Brake.number 
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
coroutine.wrap(HQOYLWG_fake_script)()
local function KEER_fake_script() -- HP.number 
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
coroutine.wrap(KEER_fake_script)()
local function YWYNO_fake_script() -- SuperCharger.number 
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
coroutine.wrap(YWYNO_fake_script)()
local function ZIKHU_fake_script() -- SuperChargerBoost.number 
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
coroutine.wrap(ZIKHU_fake_script)()
local function BNSNLQW_fake_script() -- TurboCharger.number 
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
coroutine.wrap(BNSNLQW_fake_script)()
local function WVJWUP_fake_script() -- TurboChargerBoost.number 
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
coroutine.wrap(WVJWUP_fake_script)()
local function AOAS_fake_script() -- usnBtn.usnBtnHandler 
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
coroutine.wrap(AOAS_fake_script)()
local function HUEVY_fake_script() -- OpenFrame.drg 
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
coroutine.wrap(HUEVY_fake_script)()
local function IOAOP_fake_script() -- OpenFrame.callframe 
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
coroutine.wrap(IOAOP_fake_script)()
