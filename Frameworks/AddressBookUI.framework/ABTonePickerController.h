/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPickerControllerDelegate>, TKTonePickerViewController;

@interface ABTonePickerController : UINavigationController {
    TKTonePickerViewController *_tonePicker;
}

@property <ABPickerControllerDelegate> * delegate;
@property(retain) TKTonePickerViewController * tonePicker;

- (void)cancelButton:(id)arg1;
- (void)dealloc;
- (void)doneButton:(id)arg1;
- (id)initWithAlertType:(int)arg1 selectedToneIdentifier:(id)arg2 selectedVibrationIdentifier:(id)arg3;
- (void)setTonePicker:(id)arg1;
- (id)tonePicker;

@end