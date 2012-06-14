/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library
#import "CoreDAV-Structs.h"


@interface CoreDAVLogging : NSObject {
	CFDictionaryRef _logDelegates;	// 4 = 0x4
}
+ (id)sharedLogging;	// 0x35f5ec71
- (id)init;	// 0x35f5ecb9
- (CFSetRef)_delegatesToLogForProvider:(id)provider;	// 0x35f5ee29
- (BOOL)_shouldOutputAtLevel:(int)level forAccountInfoProvider:(id)accountInfoProvider;	// 0x35f5ef3d
- (void)addLogDelegate:(id)delegate forAccountInfoProvider:(id)accountInfoProvider;	// 0x35f5ed5d
- (void)dealloc;	// 0x35f5ed1d
- (CFSetRef)delegatesToLogTransmittedDataForAccountInfoProvider:(id)accountInfoProvider;	// 0x35f5efed
- (void)logDiagnosticForProvider:(id)provider withLevel:(int)level format:(id)format args:(void *)args;	// 0x35f5f02d
- (void)removeLogDelegate:(id)delegate forAccountInfoProvider:(id)accountInfoProvider;	// 0x35f5eddd
- (BOOL)shouldLogAtLevel:(int)level forAccountInfoProvider:(id)accountInfoProvider;	// 0x35f5ee8d
@end
