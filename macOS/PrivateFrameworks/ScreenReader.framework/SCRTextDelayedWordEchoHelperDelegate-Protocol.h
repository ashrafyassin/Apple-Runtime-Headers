//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReader/NSObject-Protocol.h>

@class NSString, SCRTextDelayedWordEchoHelper, SCRTextMarkerRange;

@protocol SCRTextDelayedWordEchoHelperDelegate <NSObject>
- (BOOL)wordEchoHelper:(SCRTextDelayedWordEchoHelper *)arg1 echoTextMarkerRangeForWord:(SCRTextMarkerRange *)arg2 additionalContent:(NSString *)arg3;
@end

