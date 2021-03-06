/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSError, NSString, NSArray;
@protocol NSCopying, OS_xpc_object, NSCoding;

@interface MBMessage : NSObject {
	NSObject<OS_xpc_object> *_xpcObject;	// 4 = 0x4
	NSMutableDictionary *_messageInfo;	// 8 = 0x8
	NSMutableDictionary *_replyInfo;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSArray *arguments;	// G=0x30461ba1; 
@property(copy, nonatomic) NSError *error;	// G=0x30461bc9; S=0x30461bf1; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x30461b79; 
@property(copy, nonatomic) NSObject<NSCopying, NSCoding> *reply;	// G=0x30461d21; S=0x30461cc9; 
@property(copy, nonatomic) NSError *replyError;	// G=0x30461d71; S=0x30461d49; 
+ (id)messageWithName:(id)name arguments:(id)arguments;	// 0x30461945
- (id)initWithName:(id)name arguments:(id)arguments;	// 0x30461991
- (id)_initWithXPCObject:(id)xpcobject;	// 0x30461771
- (id)_xpcObject;	// 0x30461d99
// declared property getter: - (id)arguments;	// 0x30461ba1
- (void)dealloc;	// 0x30461b01
- (id)description;	// 0x30461e49
// declared property getter: - (id)error;	// 0x30461bc9
// declared property getter: - (id)name;	// 0x30461b79
// declared property getter: - (id)reply;	// 0x30461d21
// declared property getter: - (id)replyError;	// 0x30461d71
- (void)sendReply;	// 0x30461c19
// declared property setter: - (void)setError:(id)error;	// 0x30461bf1
// declared property setter: - (void)setReply:(id)reply;	// 0x30461cc9
// declared property setter: - (void)setReplyError:(id)error;	// 0x30461d49
@end

