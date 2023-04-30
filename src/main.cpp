#include <app.hpp>

int main()
{
    // First create the renderer, where one can customize SDL or other stuff's initialization.
    auto renderer_opts = pu::ui::render::RendererInitOptions(SDL_INIT_EVERYTHING, pu::ui::render::RendererHardwareFlags);
    renderer_opts.UseImage(pu::ui::render::IMGAllFlags);
    renderer_opts.UseAudio(pu::ui::render::MixerAllFlags);
    renderer_opts.UseTTF();

    auto renderer = pu::ui::render::Renderer::New(renderer_opts);

    // Create the application from the renderer
    auto main = ANXApplication::New(renderer);

    main->Prepare();

    main->ShowWithFadeIn();

    return 0;
}