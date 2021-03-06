//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <PassKitUI/PKRemoteSubcredentialMessageComposeViewControllerProtocol-Protocol.h>

@class NSString;
@protocol PKSubcredentialMessageComposeViewControllerDelegate;

@interface PKRemoteSubcredentialMessageComposeViewController : _UIRemoteViewController <PKRemoteSubcredentialMessageComposeViewControllerProtocol>
{
    _Bool _finished;
    id <PKSubcredentialMessageComposeViewControllerDelegate> _delegate;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (_Bool)shouldPropagateAppearanceCustomizations;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PKSubcredentialMessageComposeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)messageComposeViewControllerDidFinishWithResult:(_Bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

