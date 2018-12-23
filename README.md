# Dolphin split view : The right way

KDE Plasma's File Manager, **Dolphin**, patched for having normal behavior of the F3 key (the split view).

With this patch:  
When you close the split view, it is the opposite pane that disappears, <u>not the focused view</u> (this is the default behavior with Dolphin, and it is the opposite to every other Window Manager).

# The option is configurable

Additionnaly there is a configuration checkbox to control that option :
menu **General/Behavior/Misc**.

See "Close focused split fiew when toggling off".

![preview.png](preview.png "")


# Notes 

I am publishing an AUR package because the KDE team surprisingly did not accept the change, even if it could be disabled by default & by configuration.

