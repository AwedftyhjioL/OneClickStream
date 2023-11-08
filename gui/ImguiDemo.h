//
// Created by Y on 2023/11/8.
//

#ifndef ONECLICKSTREAM_CPP_IMGUIDEMO_H
#define ONECLICKSTREAM_CPP_IMGUIDEMO_H

#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"
#include <d3d11.h>
#include <tchar.h>


namespace Gui
{

    class ImguiDemo
    {
    public:

        int Run();

    public:
        static void SetResizeWidth(UINT width);

        static void SetResizeHeight(UINT height);

        static UINT ResizeWidth();

        static UINT ResizeHeight();

    private:

        bool CreateDeviceD3D(HWND hWnd);

        void CleanupDeviceD3D();

        void CreateRenderTarget();

        void CleanupRenderTarget();



    private:

        static UINT                 s_resize_width_;
        static UINT                 s_resize_height_;

    private:

        ID3D11Device*               g_pd3dDevice = nullptr;
        ID3D11DeviceContext*        g_pd3dDeviceContext = nullptr;
        IDXGISwapChain*             g_pSwapChain = nullptr;

        ID3D11RenderTargetView*     g_mainRenderTargetView = nullptr;



    };

} // Gui

#endif //ONECLICKSTREAM_CPP_IMGUIDEMO_H
