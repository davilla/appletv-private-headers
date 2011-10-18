/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library


@interface VMUMachTaskContainer : NSObject {
	int _pid;	// 4 = 0x4
	unsigned _task;	// 8 = 0x8
}
@property(readonly, assign) int pid;	// G=0x31f62df5; converted property
@property(readonly, assign) unsigned task;	// G=0x31f62de5; converted property
+ (id)machTaskContainer;	// 0x31f62f85
+ (id)machTaskContainerWithPid:(int)pid;	// 0x31f62eb5
+ (id)machTaskContainerWithPid:(int)pid task:(unsigned)task;	// 0x31f62e75
+ (id)machTaskContainerWithTask:(unsigned)task;	// 0x31f62f31
- (id)initWithPid:(int)pid task:(unsigned)task;	// 0x31f62e05
- (void)dealloc;	// 0x31f6301d
- (id)description;	// 0x31f63075
- (void)finalize;	// 0x31f62fc5
// converted property getter: - (int)pid;	// 0x31f62df5
// converted property getter: - (unsigned)task;	// 0x31f62de5
@end

