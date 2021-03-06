/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface EKDaemonConnection : NSObject {
@private
	unsigned _options;	// 4 = 0x4
	NSString *_dbPath;	// 8 = 0x8
	unsigned _serverPort;	// 12 = 0xc
	unsigned _machPort;	// 16 = 0x10
	unsigned _connectionPort;	// 20 = 0x14
	id _delegate;	// 24 = 0x18
}
@property(assign) id delegate;	// G=0x334a3125; S=0x3346e3a9; @synthesize=_delegate
@property(readonly, assign) unsigned port;	// G=0x3346f8d5; 
- (id)initWithOptions:(unsigned long)options path:(id)path;	// 0x3346e059
- (BOOL)_connectToServer;	// 0x3346e19d
- (void)_daemonRestarted;	// 0x334a3135
- (void)dealloc;	// 0x334a3185
// declared property getter: - (id)delegate;	// 0x334a3125
// declared property getter: - (unsigned)port;	// 0x3346f8d5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3346e3a9
@end

