//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/PUICTableViewCell.h>

#import <AuthKitUI/PUICTextFieldDelegate-Protocol.h>

@class AKTextFieldActionItem, NSString, PUICTextField;

@interface AKTextFieldCell : PUICTableViewCell <PUICTextFieldDelegate>
{
    AKTextFieldActionItem *_textFieldActionItem;
    PUICTextField *_detailTextField;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PUICTextField *detailTextField; // @synthesize detailTextField=_detailTextField;
@property(retain, nonatomic) AKTextFieldActionItem *textFieldActionItem; // @synthesize textFieldActionItem=_textFieldActionItem;
- (void)textInputValueCancelled:(id)arg1;
- (void)textField:(id)arg1 textInputValueDidChange:(id)arg2;
- (void)_setupDetailTextField;
- (void)_setup;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

