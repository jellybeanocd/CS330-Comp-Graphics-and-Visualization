< ? xml version = "1.0" encoding = "utf-8" ? >
<Project DefaultTargets = "Build" ToolsVersion = "15.0" xmlns = "http://schemas.microsoft.com/developer/msbuild/2003">
<ItemGroup Label = "ProjectConfigurations">
<ProjectConfiguration Include = "Debug|Win32">
<Configuration>Debug< / Configuration>
<Platform>Win32< / Platform>
< / ProjectConfiguration>
<ProjectConfiguration Include = "Release|Win32">
<Configuration>Release< / Configuration>
<Platform>Win32< / Platform>
< / ProjectConfiguration>
<ProjectConfiguration Include = "Debug|x64">
<Configuration>Debug< / Configuration>
<Platform>x64< / Platform>
< / ProjectConfiguration>
<ProjectConfiguration Include = "Release|x64">
<Configuration>Release< / Configuration>
<Platform>x64< / Platform>
< / ProjectConfiguration>
< / ItemGroup>
<PropertyGroup Label = "Globals">
< VCProjectVersion>15.0 < / VCProjectVersion >
<ProjectGuid>{4FAE3AC6 - 48E3 - 4059 - 9534 - CA932EFBF7E9}< / ProjectGuid>
<RootNamespace>tutorial0305< / RootNamespace>
< WindowsTargetPlatformVersion>10.0.17763.0 < / WindowsTargetPlatformVersion >
< / PropertyGroup>
<Import Project = "$(VCTargetsPath)\Microsoft.Cpp.Default.props" / >
<PropertyGroup Condition = "'$(Configuration)|$(Platform)'=='Debug|Win32'" Label = "Configuration">
<ConfigurationType>Application< / ConfigurationType>
<UseDebugLibraries>true< / UseDebugLibraries>
<PlatformToolset>v141< / PlatformToolset>
<CharacterSet>MultiByte< / CharacterSet>
< / PropertyGroup>
<PropertyGroup Condition = "'$(Configuration)|$(Platform)'=='Release|Win32'" Label = "Configuration">
<ConfigurationType>Application< / ConfigurationType>
<UseDebugLibraries>false< / UseDebugLibraries>
<PlatformToolset>v141< / PlatformToolset>
<WholeProgramOptimization>true< / WholeProgramOptimization>
<CharacterSet>MultiByte< / CharacterSet>
< / PropertyGroup>
<PropertyGroup Condition = "'$(Configuration)|$(Platform)'=='Debug|x64'" Label = "Configuration">
<ConfigurationType>Application< / ConfigurationType>
<UseDebugLibraries>true< / UseDebugLibraries>
<PlatformToolset>v141< / PlatformToolset>
<CharacterSet>MultiByte< / CharacterSet>
< / PropertyGroup>
<PropertyGroup Condition = "'$(Configuration)|$(Platform)'=='Release|x64'" Label = "Configuration">
<ConfigurationType>Application< / ConfigurationType>
<UseDebugLibraries>false< / UseDebugLibraries>
<PlatformToolset>v141< / PlatformToolset>
<WholeProgramOptimization>true< / WholeProgramOptimization>
<CharacterSet>MultiByte< / CharacterSet>
< / PropertyGroup>
<Import Project = "$(VCTargetsPath)\Microsoft.Cpp.props" / >
<ImportGroup Label = "ExtensionSettings">
< / ImportGroup>
<ImportGroup Label = "Shared">
< / ImportGroup>
<ImportGroup Label = "PropertySheets" Condition = "'$(Configuration)|$(Platform)'=='Debug|Win32'">
<Import Project = "$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props" Condition = "exists('$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props')" Label = "LocalAppDataPlatform" / >
<Import Project = "..\..\Graphics_win32.props" / >
< / ImportGroup>
<ImportGroup Label = "PropertySheets" Condition = "'$(Configuration)|$(Platform)'=='Release|Win32'">
<Import Project = "$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props" Condition = "exists('$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props')" Label = "LocalAppDataPlatform" / >
<Import Project = "..\..\Graphics_win32.props" / >
< / ImportGroup>
<ImportGroup Label = "PropertySheets" Condition = "'$(Configuration)|$(Platform)'=='Debug|x64'">
<Import Project = "$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props" Condition = "exists('$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props')" Label = "LocalAppDataPlatform" / >
<Import Project = "..\..\Graphics_x64.props" / >
< / ImportGroup>
<ImportGroup Label = "PropertySheets" Condition = "'$(Configuration)|$(Platform)'=='Release|x64'">
<Import Project = "$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props" Condition = "exists('$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props')" Label = "LocalAppDataPlatform" / >
<Import Project = "..\..\Graphics_x64.props" / >
< / ImportGroup>
<PropertyGroup Label = "UserMacros" / >
<PropertyGroup Condition = "'$(Configuration)|$(Platform)'=='Debug|x64'">
<OutDir>$(SolutionDir)$(Configuration)\< / OutDir>
<IntDir>$(Configuration)\< / IntDir>
< / PropertyGroup>
<PropertyGroup Condition = "'$(Configuration)|$(Platform)'=='Release|x64'">
<OutDir>$(SolutionDir)$(Configuration)\< / OutDir>
<IntDir>$(Configuration)\< / IntDir>
< / PropertyGroup>
<ItemDefinitionGroup Condition = "'$(Configuration)|$(Platform)'=='Debug|x64'">
<ClCompile>
<WarningLevel>Level3< / WarningLevel>
<Optimization>Disabled< / Optimization>
<SDLCheck>true< / SDLCheck>
<ConformanceMode>true< / ConformanceMode>
< / ClCompile>
< / ItemDefinitionGroup>
<ItemDefinitionGroup Condition = "'$(Configuration)|$(Platform)'=='Debug|Win32'">
<ClCompile>
<WarningLevel>Level3< / WarningLevel>
<Optimization>Disabled< / Optimization>
<SDLCheck>true< / SDLCheck>
<ConformanceMode>true< / ConformanceMode>
< / ClCompile>
< / ItemDefinitionGroup>
<ItemDefinitionGroup Condition = "'$(Configuration)|$(Platform)'=='Release|Win32'">
<ClCompile>
<WarningLevel>Level3< / WarningLevel>
<Optimization>MaxSpeed< / Optimization>
<FunctionLevelLinking>true< / FunctionLevelLinking>
<IntrinsicFunctions>true< / IntrinsicFunctions>
<SDLCheck>true< / SDLCheck>
<ConformanceMode>true< / ConformanceMode>
< / ClCompile>
<Link>
<EnableCOMDATFolding>true< / EnableCOMDATFolding>
<OptimizeReferences>true< / OptimizeReferences>
< / Link>
< / ItemDefinitionGroup>
<ItemDefinitionGroup Condition = "'$(Configuration)|$(Platform)'=='Release|x64'">
<ClCompile>
<WarningLevel>Level3< / WarningLevel>
<Optimization>MaxSpeed< / Optimization>
<FunctionLevelLinking>true< / FunctionLevelLinking>
<IntrinsicFunctions>true< / IntrinsicFunctions>
<SDLCheck>true< / SDLCheck>
<ConformanceMode>true< / ConformanceMode>
< / ClCompile>
<Link>
<EnableCOMDATFolding>true< / EnableCOMDATFolding>
<OptimizeReferences>true< / OptimizeReferences>
< / Link>
< / ItemDefinitionGroup>
<ItemGroup>
<ClCompile Include = "..\tut_03_05.cpp" / >
< / ItemGroup>
<Import Project = "$(VCTargetsPath)\Microsoft.Cpp.targets" / >
<ImportGroup Label = "ExtensionTargets">
< / ImportGroup>
< / Project>