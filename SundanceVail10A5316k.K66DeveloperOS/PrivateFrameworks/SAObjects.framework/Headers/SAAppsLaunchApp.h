/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString;

@interface SAAppsLaunchApp : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *launchId;	// G=0x32f5f8c1; S=0x32f5f8dd; 
+ (id)launchApp;	// 0x32f5f831
+ (id)launchAppWithDictionary:(id)dictionary context:(id)context;	// 0x32f5f875
- (id)encodedClassName;	// 0x32f5f825
- (id)groupIdentifier;	// 0x32f5f815
// declared property getter: - (id)launchId;	// 0x32f5f8c1
- (BOOL)requiresResponse;	// 0x32f5f92d
// declared property setter: - (void)setLaunchId:(id)anId;	// 0x32f5f8dd
@end
