/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <NSObject.h> // Unknown library
#import "TULogger.h"

@class NSString;
@protocol TUAppender;

@interface TUBasicLogger : NSObject <TULogger> {
	int _lock;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
	int _minimumLogLevel;	// 12 = 0xc
	BOOL _enabled;	// 16 = 0x10
	NSObject<TUAppender> *_appender;	// 20 = 0x14
}
@property(readonly, assign) NSObject<TUAppender> *appender;	// G=0x37a8b079; 
@property(assign) BOOL enabled;	// G=0x37a8afcd; S=0x37a8af79; 
@property(readonly, assign) NSString *identifier;	// G=0x37a8aeb9; 
@property(assign) int minimumLogLevel;	// G=0x37a8af45; S=0x37a8af11; 
- (id)initWithIdentifier:(id)identifier minimumLogLevel:(int)level appender:(id)appender;	// 0x37a8a831
- (BOOL)_shouldLogWithLevel:(int)level topic:(id)topic;	// 0x37a8a9b1
// declared property getter: - (id)appender;	// 0x37a8b079
- (void)dealloc;	// 0x37a8a921
// declared property getter: - (BOOL)enabled;	// 0x37a8afcd
- (void)flush;	// 0x37a8adf9
// declared property getter: - (id)identifier;	// 0x37a8aeb9
- (void)logWithLevel:(int)level topic:(id)topic backtrace:(BOOL)backtrace format:(id)format;	// 0x37a8a9e1
- (void)logWithLevel:(int)level topic:(id)topic backtrace:(BOOL)backtrace format:(id)format args:(void *)args;	// 0x37a8ac51
- (void)logWithLevel:(int)level topic:(id)topic backtrace:(BOOL)backtrace text:(id)text;	// 0x37a8ab29
// declared property getter: - (int)minimumLogLevel;	// 0x37a8af45
- (void)setAppender:(id)appender;	// 0x37a8b001
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x37a8af79
- (void)setIdentifier:(id)identifier;	// 0x37a8ae3d
// declared property setter: - (void)setMinimumLogLevel:(int)level;	// 0x37a8af11
- (BOOL)shouldLog;	// 0x37a8ad99
- (BOOL)shouldLogWithLevel:(int)level topic:(id)topic;	// 0x37a8adb1
@end
