/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRMerchant, NSLock, NSString;

__attribute__((visibility("hidden")))
@interface ClientIdentity : NSObject {
@private
	unsigned _applicationState;	// 4 = 0x4
	BOOL _appleSigned;	// 8 = 0x8
	NSString *_clientIdentifier;	// 12 = 0xc
	int _clientType;	// 16 = 0x10
	BOOL _isListening;	// 20 = 0x14
	NSLock *_lock;	// 24 = 0x18
	int _pid;	// 28 = 0x1c
}
@property(readonly, assign, getter=isAppleSigned) BOOL appleSigned;	// G=0x33bd9a45; 
@property(assign) unsigned applicationState;	// G=0x33bd97e5; S=0x33bd9b75; 
@property(readonly, assign) BOOL canReceiveMessages;	// G=0x33bd9835; 
@property(readonly, assign) NSString *clientIdentifier;	// G=0x33bd9911; 
@property(readonly, assign) NSString *clientIdentifierHeader;	// G=0x33bd997d; 
@property(readonly, assign) int clientType;	// G=0x33bd98c1; 
@property(assign, getter=isListening) BOOL listening;	// G=0x33bd9add; S=0x33bd9bc1; 
@property(readonly, assign, nonatomic) BRMerchant *merchant;	// G=0x33bfde59; 
@property(assign) int processIdentifier;	// G=0x33bd9b29; S=0x33bd9c0d; 
- (id)init;	// 0x33bd9589
- (id)initWithApplicationIdentifier:(id)applicationIdentifier isAppleSigned:(BOOL)aSigned;	// 0x33bd96a1
- (id)initWithAuditToken:(XXStruct_kUSYWB *)auditToken;	// 0x33bd959d
- (id)initWithMerchant:(id)merchant;	// 0x33bfdce9
- (id)_initCommon;	// 0x33bd94f9
- (unsigned)_ntsApplicationState;	// 0x33bd9cd9
- (int)_ntsClientType;	// 0x33bd9d19
// declared property getter: - (unsigned)applicationState;	// 0x33bd97e5
// declared property getter: - (BOOL)canReceiveMessages;	// 0x33bd9835
// declared property getter: - (id)clientIdentifier;	// 0x33bd9911
// declared property getter: - (id)clientIdentifierHeader;	// 0x33bd997d
// declared property getter: - (int)clientType;	// 0x33bd98c1
- (void)dealloc;	// 0x33bd9785
// declared property getter: - (BOOL)isAppleSigned;	// 0x33bd9a45
- (BOOL)isEqual:(id)equal;	// 0x33bd9c59
// declared property getter: - (BOOL)isListening;	// 0x33bd9add
// declared property getter: - (id)merchant;	// 0x33bfde59
// declared property getter: - (int)processIdentifier;	// 0x33bd9b29
// declared property setter: - (void)setApplicationState:(unsigned)state;	// 0x33bd9b75
// declared property setter: - (void)setListening:(BOOL)listening;	// 0x33bd9bc1
// declared property setter: - (void)setProcessIdentifier:(int)identifier;	// 0x33bd9c0d
@end

