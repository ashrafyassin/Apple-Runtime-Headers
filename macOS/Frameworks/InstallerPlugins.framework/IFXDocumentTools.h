//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IFXDocumentTools : NSObject
{
}

+ (void)saveView:(id)arg1 withDefaultFileName:(id)arg2 modalForWindow:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (BOOL)saveView:(id)arg1 withDefaultFileName:(id)arg2;
+ (void)printView:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3;
+ (void)standardizeTextView:(id)arg1 showContextualMenu:(BOOL)arg2;
+ (id)loadResourceData:(id)arg1 forDocument:(id)arg2 language:(id)arg3 verifyFailed:(char *)arg4;
+ (id)loadResourceData:(id)arg1 forDocument:(id)arg2 language:(id)arg3;
+ (id)_memoryBasedAttributedStringWithFile:(id)arg1;

@end

