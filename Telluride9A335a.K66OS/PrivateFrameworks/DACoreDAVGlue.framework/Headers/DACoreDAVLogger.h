/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
 */

#import "CoreDAVLogDelegate.h"
#import <DATrafficLogger.h> // Unknown library


@interface DACoreDAVLogger : DATrafficLogger <CoreDAVLogDelegate> {
}
+ (id)registerDefaultLoggerWithCoreDAV;	// 0x305bd4e9
- (void)coreDAVLogDiagnosticMessage:(id)message atLevel:(int)level;	// 0x305bd5a9
- (int)coreDAVLogLevel;	// 0x305bd589
- (void)coreDAVLogTransmittedDataPartial:(id)partial;	// 0x305bd5f1
- (int)coreDAVOutputLevel;	// 0x305bd5a1
- (void)coreDAVTransmittedDataFinished;	// 0x305bd5f5
- (BOOL)shouldLogTransmittedData;	// 0x305bd5ed
@end

