/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAV-Structs.h"
#import <NSObject.h> // Unknown library


@interface CoreDAVLogging : NSObject {
	CFDictionaryRef _logDelegates;	// 4 = 0x4
}
+ (id)sharedLogging;	// 0x30fed229
- (id)init;	// 0x30fed271
- (CFSetRef)_delegatesToLogForProvider:(id)provider;	// 0x30fed3e1
- (BOOL)_shouldOutputAtLevel:(int)level forAccountInfoProvider:(id)accountInfoProvider;	// 0x30fed4c5
- (void)addLogDelegate:(id)delegate forAccountInfoProvider:(id)accountInfoProvider;	// 0x30fed315
- (void)dealloc;	// 0x30fed2d5
- (CFSetRef)delegatesToLogTransmittedDataForAccountInfoProvider:(id)accountInfoProvider;	// 0x30fed545
- (void)logDiagnosticForProvider:(id)provider withLevel:(int)level format:(id)format args:(void *)args;	// 0x30fed585
- (void)removeLogDelegate:(id)delegate forAccountInfoProvider:(id)accountInfoProvider;	// 0x30fed399
- (BOOL)shouldLogAtLevel:(int)level forAccountInfoProvider:(id)accountInfoProvider;	// 0x30fed445
@end

