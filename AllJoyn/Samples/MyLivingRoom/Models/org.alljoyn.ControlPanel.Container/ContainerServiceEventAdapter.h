//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace org { namespace alljoyn { namespace ControlPanel { namespace Container {

// This class, and the associated EventArgs classes, exist for the benefit of JavaScript developers who
// do not have the ability to implement IContainerService. Instead, ContainerServiceEventAdapter
// provides the Interface implementation and exposes a set of compatible events to the developer.
public ref class ContainerServiceEventAdapter sealed : [Windows::Foundation::Metadata::Default] IContainerService
{
public:
    // Method Invocation Events
    // Property Read Events
    event Windows::Foundation::TypedEventHandler<ContainerServiceEventAdapter^, ContainerGetVersionRequestedEventArgs^>^ GetVersionRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<ContainerServiceEventAdapter^, ContainerGetVersionRequestedEventArgs^>^ handler) 
        { 
            return _GetVersionRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<ContainerServiceEventAdapter^>(sender), safe_cast<ContainerGetVersionRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetVersionRequested -= token; 
        } 
    internal: 
        void raise(ContainerServiceEventAdapter^ sender, ContainerGetVersionRequestedEventArgs^ args) 
        { 
            _GetVersionRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<ContainerServiceEventAdapter^, ContainerGetStatesRequestedEventArgs^>^ GetStatesRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<ContainerServiceEventAdapter^, ContainerGetStatesRequestedEventArgs^>^ handler) 
        { 
            return _GetStatesRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<ContainerServiceEventAdapter^>(sender), safe_cast<ContainerGetStatesRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetStatesRequested -= token; 
        } 
    internal: 
        void raise(ContainerServiceEventAdapter^ sender, ContainerGetStatesRequestedEventArgs^ args) 
        { 
            _GetStatesRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<ContainerServiceEventAdapter^, ContainerGetOptParamsRequestedEventArgs^>^ GetOptParamsRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<ContainerServiceEventAdapter^, ContainerGetOptParamsRequestedEventArgs^>^ handler) 
        { 
            return _GetOptParamsRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<ContainerServiceEventAdapter^>(sender), safe_cast<ContainerGetOptParamsRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetOptParamsRequested -= token; 
        } 
    internal: 
        void raise(ContainerServiceEventAdapter^ sender, ContainerGetOptParamsRequestedEventArgs^ args) 
        { 
            _GetOptParamsRequested(sender, args);
        } 
    }

    // Property Write Events
    // IContainerService Implementation

    virtual Windows::Foundation::IAsyncOperation<ContainerGetVersionResult^>^ GetVersionAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<ContainerGetStatesResult^>^ GetStatesAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<ContainerGetOptParamsResult^>^ GetOptParamsAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);


private:
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetVersionRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetStatesRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetOptParamsRequested;
};

} } } } 