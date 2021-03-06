//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsSettings/NSObject-Protocol.h>

@class NSSet, NSString, UNNotificationSettings, UNNotificationSystemSettings;

@protocol UNUserNotificationSettingsServerProtocol <NSObject>
- (void)setNotificationSystemSettings:(UNNotificationSystemSettings *)arg1;
- (void)getNotificationSystemSettingsWithCompletionHandler:(void (^)(UNNotificationSystemSettings *))arg1;
- (void)replaceNotificationTopicSettings:(UNNotificationSettings *)arg1 forNotificationSourceIdentifier:(NSString *)arg2 topicIdentifier:(NSString *)arg3;
- (void)replaceNotificationSettings:(UNNotificationSettings *)arg1 forNotificationSourceIdentifier:(NSString *)arg2;
- (void)getAllNotificationSourcesWithCompletionHandler:(void (^)(NSSet *))arg1;
- (void)getNotificationSources:(NSSet *)arg1 withCompletionHandler:(void (^)(NSSet *))arg2;
- (void)getNotificationSource:(NSString *)arg1 withCompletionHandler:(void (^)(UNNotificationSource *))arg2;
@end

