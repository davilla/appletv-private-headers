/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library

@class NSString, HSConnection, SSAccount;
@protocol NSObject;

@interface HSLibrary : NSObject {
@private
	SSAccount *_account;	// 4 = 0x4
	HSConnection *_connection;	// 8 = 0x8
	id<NSObject> _context;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	BOOL _requiresPassword;	// 20 = 0x14
	NSString *_uniqueIdentifier;	// 24 = 0x18
	unsigned _version;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) HSConnection *connection;	// G=0x30143b51; @synthesize=_connection
@property(retain, nonatomic) id<NSObject> context;	// G=0x30143b61; S=0x30143b71; @synthesize=_context
@property(readonly, assign, nonatomic) NSString *name;	// G=0x30143b95; @synthesize=_name
@property(readonly, assign, nonatomic) BOOL requiresPassword;	// G=0x30143ba5; @synthesize=_requiresPassword
@property(readonly, assign, nonatomic) NSString *uniqueIdentifier;	// G=0x30143bb5; @synthesize=_uniqueIdentifier
@property(readonly, assign, nonatomic) unsigned version;	// G=0x30143bc5; @synthesize=_version
- (id)initWithBaseURL:(id)baseURL forAccount:(id)account;	// 0x3014398d
- (id)initWithName:(id)name uniqueIdentifier:(id)identifier version:(unsigned)version baseURL:(id)url;	// 0x301437f5
// declared property getter: - (id)connection;	// 0x30143b51
// declared property getter: - (id)context;	// 0x30143b61
- (void)dealloc;	// 0x30143ab5
// declared property getter: - (id)name;	// 0x30143b95
// declared property getter: - (BOOL)requiresPassword;	// 0x30143ba5
// declared property setter: - (void)setContext:(id)context;	// 0x30143b71
// declared property getter: - (id)uniqueIdentifier;	// 0x30143bb5
// declared property getter: - (unsigned)version;	// 0x30143bc5
@end

