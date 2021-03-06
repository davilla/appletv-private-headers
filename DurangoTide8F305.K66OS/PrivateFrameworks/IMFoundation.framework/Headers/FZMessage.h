/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import "NSCopying.h"
#import "IMSecureObject.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "IMFoundation-Structs.h"

@class NSArray, NSDictionary, NSDate, NSAttributedString, NSError, NSString;

@interface FZMessage : NSObject <NSCoding, NSCopying, IMSecureObject> {
	NSDictionary *_senderInfo;	// 4 = 0x4
	NSDate *_time;	// 8 = 0x8
	NSAttributedString *_body;	// 12 = 0xc
	NSDictionary *_attributes;	// 16 = 0x10
	NSArray *_fileTransferGUIDs;	// 20 = 0x14
	int _flags;	// 24 = 0x18
	NSError *_error;	// 28 = 0x1c
	NSString *_guid;	// 32 = 0x20
	NSString *_subject;	// 36 = 0x24
	NSString *_URL;	// 40 = 0x28
}
@property(retain) NSString *URL;	// G=0x31ad9b0d; S=0x31ad9265; @synthesize=_URL
@property(retain) NSDictionary *attributes;	// G=0x31ad9aad; S=0x31ad9b7d; @synthesize=_attributes
@property(retain, nonatomic) NSAttributedString *body;	// G=0x31ad90cd; S=0x31ad90fd; @synthesize=_body
@property(retain) NSError *error;	// G=0x31ad9a95; S=0x31ad9b51; @synthesize=_error
@property(retain, nonatomic) NSArray *fileTransferGUIDs;	// G=0x31ad90ed; S=0x31ad91c9; @synthesize=_fileTransferGUIDs
@property(assign) int flags;	// G=0x31ad90dd; S=0x31ad90b1; @synthesize=_flags
@property(retain) NSString *guid;	// G=0x31ad9ac5; S=0x31ad9ba9; @synthesize=_guid
@property(readonly, assign, nonatomic) BOOL isAlert;	// G=0x31ad9061; 
@property(readonly, assign, nonatomic) BOOL isEmpty;	// G=0x31ad9089; 
@property(readonly, assign, nonatomic) BOOL isFinished;	// G=0x31ad9075; 
@property(readonly, assign, nonatomic) BOOL isPrepared;	// G=0x31ad909d; 
@property(assign, nonatomic) int securityLevel;	// G=0x31ad92fd; S=0x31ad9331; 
@property(retain) NSString *sender;	// G=0x31ad9349; S=0x31ad9215; 
@property(retain) NSDictionary *senderInfo;	// G=0x31ad9a7d; S=0x31ad9b25; @synthesize=_senderInfo
@property(retain) NSString *subject;	// G=0x31ad9af5; S=0x31ad92b1; @synthesize=_subject
@property(retain) NSDate *time;	// G=0x31ad9add; S=0x31ad9bd5; @synthesize=_time
- (id)init;	// 0x31ad9a51
- (id)initWithCoder:(id)coder;	// 0x31ad9511
- (id)initWithSender:(id)sender time:(id)time body:(id)body attributes:(id)attributes fileTransferGUIDs:(id)guids flags:(int)flags error:(id)error guid:(id)guid;	// 0x31ad9379
- (id)initWithSenderInfo:(id)senderInfo time:(id)time body:(id)body attributes:(id)attributes fileTransferGUIDs:(id)guids flags:(int)flags error:(id)error guid:(id)guid;	// 0x31ad9925
// declared property getter: - (id)URL;	// 0x31ad9b0d
- (void)_cleanMessage;	// 0x31ad9665
- (void)adjustIsEmptyFlag;	// 0x31ad9149
// declared property getter: - (id)attributes;	// 0x31ad9aad
// declared property getter: - (id)body;	// 0x31ad90cd
- (id)copyWithZone:(NSZone *)zone;	// 0x31ad9709
- (void)dealloc;	// 0x31ad984d
- (void)encodeWithCoder:(id)coder;	// 0x31ad93dd
// declared property getter: - (id)error;	// 0x31ad9a95
// declared property getter: - (id)fileTransferGUIDs;	// 0x31ad90ed
// declared property getter: - (int)flags;	// 0x31ad90dd
// declared property getter: - (id)guid;	// 0x31ad9ac5
// declared property getter: - (BOOL)isAlert;	// 0x31ad9061
// declared property getter: - (BOOL)isEmpty;	// 0x31ad9089
// declared property getter: - (BOOL)isFinished;	// 0x31ad9075
// declared property getter: - (BOOL)isPrepared;	// 0x31ad909d
// declared property getter: - (int)securityLevel;	// 0x31ad92fd
// declared property getter: - (id)sender;	// 0x31ad9349
// declared property getter: - (id)senderInfo;	// 0x31ad9a7d
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x31ad9b7d
// declared property setter: - (void)setBody:(id)body;	// 0x31ad90fd
// declared property setter: - (void)setError:(id)error;	// 0x31ad9b51
// declared property setter: - (void)setFileTransferGUIDs:(id)guids;	// 0x31ad91c9
// declared property setter: - (void)setFlags:(int)flags;	// 0x31ad90b1
// declared property setter: - (void)setGuid:(id)guid;	// 0x31ad9ba9
// declared property setter: - (void)setSecurityLevel:(int)level;	// 0x31ad9331
// declared property setter: - (void)setSender:(id)sender;	// 0x31ad9215
// declared property setter: - (void)setSenderInfo:(id)info;	// 0x31ad9b25
// declared property setter: - (void)setSubject:(id)subject;	// 0x31ad92b1
// declared property setter: - (void)setTime:(id)time;	// 0x31ad9bd5
// declared property setter: - (void)setURL:(id)url;	// 0x31ad9265
// declared property getter: - (id)subject;	// 0x31ad9af5
// declared property getter: - (id)time;	// 0x31ad9add
@end

