//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@class NSArray, NSIndexPath, NSString, OKWidgetView;

@protocol OKWidgetViewCollection <NSObject>
- (OKWidgetView *)collectionItemAtIndexPath:(NSIndexPath *)arg1;
- (OKWidgetView *)collectionItemForName:(NSString *)arg1;
- (NSArray *)collectionItemsNames;
- (unsigned long long)collectionItemsCount;
@end

