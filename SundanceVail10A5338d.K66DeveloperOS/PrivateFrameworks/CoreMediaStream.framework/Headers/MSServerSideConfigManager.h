/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "MSServerSideConfigProtocolDelegate.h"

@class MSMediaStreamDaemon, NSDictionary, NSString, MSServerSideConfigProtocol;

@interface MSServerSideConfigManager : NSObject <MSServerSideConfigProtocolDelegate> {
	NSString *_personID;	// 4 = 0x4
	NSDictionary *_config;	// 8 = 0x8
	MSMediaStreamDaemon *_daemon;	// 12 = 0xc
	NSString *_configPath;	// 16 = 0x10
	MSServerSideConfigProtocol *_protocol;	// 20 = 0x14
	int _state;	// 24 = 0x18
}
@property(retain, nonatomic) NSDictionary *config;	// G=0x337566e9; S=0x33756781; 
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x33757039; S=0x33757049; @synthesize=_daemon
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x33757029; @synthesize=_personID
+ (void)abortAllActivities;	// 0x3375645d
+ (id)configManagerForPersonID:(id)personID;	// 0x33756325
+ (id)existingConfigManagerForPersonID:(id)personID;	// 0x33756441
+ (void)forgetPersonID:(id)anId;	// 0x3375653d
+ (int)intValueForParameter:(id)parameter forPersonID:(id)personID defaultValue:(int)value;	// 0x33756c25
+ (long long)longLongValueForParameter:(id)parameter forPersonID:(id)personID defaultValue:(long long)value;	// 0x33756e25
+ (long)longValueForParameter:(id)parameter forPersonID:(id)personID defaultValue:(long)value;	// 0x33756d25
+ (id)objectForKey:(id)key forPersonID:(id)personID defaultValue:(id)value;	// 0x33756f31
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x337565a9
- (void).cxx_destruct;	// 0x33757059
- (void)abort;	// 0x33756a05
// declared property getter: - (id)config;	// 0x337566e9
// declared property getter: - (id)daemon;	// 0x33757039
- (void)dealloc;	// 0x337566a9
// declared property getter: - (id)personID;	// 0x33757029
- (void)refreshConfiguration;	// 0x33756985
- (void)serverSideConfigProtocol:(id)protocol didFinishWithConfiguration:(id)configuration error:(id)error;	// 0x33756a61
- (void)serverSideConfigProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x33756b5d
// declared property setter: - (void)setConfig:(id)config;	// 0x33756781
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x33757049
@end

