//#pragma comment(lib, "d3d10_1.lib")
#pragma comment(lib, "d3dx10.lib")

//#pragma comment(linker, "/export:D3D10CreateDevice1=d3d10_1_original.D3D10CreateDevice1")
#pragma comment(linker, "/export:D3D10CreateDevice1")

#pragma comment(linker, "/export:D3D10CreateDeviceAndSwapChain1=d3d10_1_original.D3D10CreateDeviceAndSwapChain1")
#pragma comment(linker, "/export:D3D10CreateEffectFromMemory=d3d10_1_original.D3D10CreateEffectFromMemory")
#pragma comment(linker, "/export:D3D10CompileEffectFromMemory=d3d10_1_original.D3D10CompileEffectFromMemory")
#pragma comment(linker, "/export:D3D10CompileShader=d3d10_1_original.D3D10CompileShader")
#pragma comment(linker, "/export:D3D10CreateBlob=d3d10_1_original.D3D10CreateBlob")
#pragma comment(linker, "/export:D3D10CreateEffectPoolFromMemory=d3d10_1_original.D3D10CreateEffectPoolFromMemory")
#pragma comment(linker, "/export:D3D10CreateStateBlock=d3d10_1_original.D3D10CreateStateBlock")
#pragma comment(linker, "/export:D3D10DisassembleEffect=d3d10_1_original.D3D10DisassembleEffect")
#pragma comment(linker, "/export:D3D10DisassembleShader=d3d10_1_original.D3D10DisassembleShader")
#pragma comment(linker, "/export:D3D10GetGeometryShaderProfile=d3d10_1_original.D3D10GetGeometryShaderProfile")
#pragma comment(linker, "/export:D3D10GetInputAndOutputSignatureBlob=d3d10_1_original.D3D10GetInputAndOutputSignatureBlob")
#pragma comment(linker, "/export:D3D10GetInputSignatureBlob=d3d10_1_original.D3D10GetInputSignatureBlob")
#pragma comment(linker, "/export:D3D10GetOutputSignatureBlob=d3d10_1_original.D3D10GetOutputSignatureBlob")
#pragma comment(linker, "/export:D3D10GetPixelShaderProfile=d3d10_1_original.D3D10GetPixelShaderProfile")
#pragma comment(linker, "/export:D3D10GetShaderDebugInfo=d3d10_1_original.D3D10GetShaderDebugInfo")
#pragma comment(linker, "/export:D3D10GetVersion=d3d10_1_original.D3D10GetVersion")
#pragma comment(linker, "/export:D3D10GetVertexShaderProfile=d3d10_1_original.D3D10GetVertexShaderProfile")
#pragma comment(linker, "/export:D3D10PreprocessShader=d3d10_1_original.D3D10PreprocessShader")
#pragma comment(linker, "/export:D3D10ReflectShader=d3d10_1_original.D3D10ReflectShader")
#pragma comment(linker, "/export:D3D10RegisterLayers=d3d10_1_original.D3D10RegisterLayers")
#pragma comment(linker, "/export:D3D10StateBlockMaskDifference=d3d10_1_original.D3D10StateBlockMaskDifference")
#pragma comment(linker, "/export:D3D10StateBlockMaskDisableAll=d3d10_1_original.D3D10StateBlockMaskDisableAll")
#pragma comment(linker, "/export:D3D10StateBlockMaskDisableCapture=d3d10_1_original.D3D10StateBlockMaskDisableCapture")
#pragma comment(linker, "/export:D3D10StateBlockMaskEnableAll=d3d10_1_original.D3D10StateBlockMaskEnableAll")
#pragma comment(linker, "/export:D3D10StateBlockMaskEnableCapture=d3d10_1_original.D3D10StateBlockMaskEnableCapture")
#pragma comment(linker, "/export:D3D10StateBlockMaskGetSetting=d3d10_1_original.D3D10StateBlockMaskGetSetting")
#pragma comment(linker, "/export:D3D10StateBlockMaskIntersect=d3d10_1_original.D3D10StateBlockMaskIntersect")
#pragma comment(linker, "/export:D3D10StateBlockMaskUnion=d3d10_1_original.D3D10StateBlockMaskUnion")
