/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <NSObject.h> // Unknown library
#import "AccountsDaemon-Structs.h"


@interface ACDTCCUtilities : NSObject {
}
+ (int)TCCStateForClient:(id)client accountType:(id)type;	// 0x36610e69
+ (CFStringRef)_TCCServiceForAccountTypeID:(id)accountTypeID;	// 0x366113c5
+ (id)allTCCStatesForAccountType:(id)accountType;	// 0x366112ad
+ (BOOL)clearAllTCCStatesForAccountType:(id)accountType;	// 0x3661133d
+ (BOOL)clearTCCStateForClient:(id)client accountType:(id)type;	// 0x366111e9
+ (BOOL)setTCCStateForClient:(id)client accountType:(id)type toGranted:(BOOL)granted;	// 0x3661107d
@end

