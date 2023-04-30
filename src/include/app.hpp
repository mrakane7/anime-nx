#pragma once

#include <pu/Plutonium>

class ANXLayout : public pu::ui::Layout
{
    private:
        pu::ui::elm::TextBlock::Ref helloText;

    public:
        ANXLayout();

        // Have ::Ref alias and ::New() static constructor
        PU_SMART_CTOR(ANXLayout)
};

class ANXApplication : public pu::ui::Application
{
    private:

        // Layout instance
        ANXLayout::Ref layout;
    
    public:
        using Application::Application;
        PU_SMART_CTOR(ANXApplication)

        // This initializes everything
        void OnLoad() override;
};