#include <app.hpp>

ANXLayout::ANXLayout() : Layout::Layout()
{
    this->helloText = pu::ui::elm::TextBlock::New(0, 0, "Welcome to Anime NX!");
    
    // Add the instance to the layout.
    this->Add(this->helloText);
}

void ANXApplication::OnLoad()
{
    this->layout = ANXLayout::New();

    this->LoadLayout(this->layout);
}
