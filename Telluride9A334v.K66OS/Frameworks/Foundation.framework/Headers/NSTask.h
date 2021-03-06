/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSTask : NSObject {
}
@property(retain) id arguments;	// G=0x306a379d; S=0x306a35ed; converted property
@property(retain) id currentDirectoryPath;	// G=0x306a37c1; S=0x306a3611; converted property
@property(retain) id environment;	// G=0x306a3779; S=0x306a3635; converted property
@property(retain) id launchPath;	// G=0x306a3755; S=0x306a3659; converted property
@property(retain) id standardError;	// G=0x306a3899; S=0x306a382d; converted property
@property(retain) id standardInput;	// G=0x306a3851; S=0x306a37e5; converted property
@property(retain) id standardOutput;	// G=0x306a3875; S=0x306a3809; converted property
@property(copy) id terminationHandler;	// G=0x306a3515; S=0x306a3539; 
+ (id)allocWithZone:(NSZone *)zone;	// 0x306a38e9
+ (id)currentTaskDictionary;	// 0x306a3935
+ (id)launchedTaskWithDictionary:(id)dictionary;	// 0x306a3a29
+ (id)launchedTaskWithLaunchPath:(id)launchPath arguments:(id)arguments;	// 0x306a3a7d
- (id)init;	// 0x306a38bd
// converted property getter: - (id)arguments;	// 0x306a379d
// converted property getter: - (id)currentDirectoryPath;	// 0x306a37c1
// converted property getter: - (id)environment;	// 0x306a3779
- (void)interrupt;	// 0x306a367d
- (BOOL)isRunning;	// 0x306a35a5
- (void)launch;	// 0x306a35c9
// converted property getter: - (id)launchPath;	// 0x306a3755
- (int)processIdentifier;	// 0x306a3731
- (BOOL)resume;	// 0x306a36e9
// converted property setter: - (void)setArguments:(id)arguments;	// 0x306a35ed
// converted property setter: - (void)setCurrentDirectoryPath:(id)path;	// 0x306a3611
// converted property setter: - (void)setEnvironment:(id)environment;	// 0x306a3635
// converted property setter: - (void)setLaunchPath:(id)path;	// 0x306a3659
// converted property setter: - (void)setStandardError:(id)error;	// 0x306a382d
// converted property setter: - (void)setStandardInput:(id)input;	// 0x306a37e5
// converted property setter: - (void)setStandardOutput:(id)output;	// 0x306a3809
// declared property setter: - (void)setTerminationHandler:(id)handler;	// 0x306a3539
// converted property getter: - (id)standardError;	// 0x306a3899
// converted property getter: - (id)standardInput;	// 0x306a3851
// converted property getter: - (id)standardOutput;	// 0x306a3875
- (BOOL)suspend;	// 0x306a36c5
- (int)suspendCount;	// 0x306a370d
- (void)terminate;	// 0x306a36a1
// declared property getter: - (id)terminationHandler;	// 0x306a3515
- (int)terminationReason;	// 0x306a3581
- (int)terminationStatus;	// 0x306a355d
@end

