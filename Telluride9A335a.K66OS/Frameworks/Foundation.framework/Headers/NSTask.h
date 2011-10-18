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
@property(retain) id arguments;	// G=0x320ad79d; S=0x320ad5ed; converted property
@property(retain) id currentDirectoryPath;	// G=0x320ad7c1; S=0x320ad611; converted property
@property(retain) id environment;	// G=0x320ad779; S=0x320ad635; converted property
@property(retain) id launchPath;	// G=0x320ad755; S=0x320ad659; converted property
@property(retain) id standardError;	// G=0x320ad899; S=0x320ad82d; converted property
@property(retain) id standardInput;	// G=0x320ad851; S=0x320ad7e5; converted property
@property(retain) id standardOutput;	// G=0x320ad875; S=0x320ad809; converted property
@property(copy) id terminationHandler;	// G=0x320ad515; S=0x320ad539; 
+ (id)allocWithZone:(NSZone *)zone;	// 0x320ad8e9
+ (id)currentTaskDictionary;	// 0x320ad935
+ (id)launchedTaskWithDictionary:(id)dictionary;	// 0x320ada29
+ (id)launchedTaskWithLaunchPath:(id)launchPath arguments:(id)arguments;	// 0x320ada7d
- (id)init;	// 0x320ad8bd
// converted property getter: - (id)arguments;	// 0x320ad79d
// converted property getter: - (id)currentDirectoryPath;	// 0x320ad7c1
// converted property getter: - (id)environment;	// 0x320ad779
- (void)interrupt;	// 0x320ad67d
- (BOOL)isRunning;	// 0x320ad5a5
- (void)launch;	// 0x320ad5c9
// converted property getter: - (id)launchPath;	// 0x320ad755
- (int)processIdentifier;	// 0x320ad731
- (BOOL)resume;	// 0x320ad6e9
// converted property setter: - (void)setArguments:(id)arguments;	// 0x320ad5ed
// converted property setter: - (void)setCurrentDirectoryPath:(id)path;	// 0x320ad611
// converted property setter: - (void)setEnvironment:(id)environment;	// 0x320ad635
// converted property setter: - (void)setLaunchPath:(id)path;	// 0x320ad659
// converted property setter: - (void)setStandardError:(id)error;	// 0x320ad82d
// converted property setter: - (void)setStandardInput:(id)input;	// 0x320ad7e5
// converted property setter: - (void)setStandardOutput:(id)output;	// 0x320ad809
// declared property setter: - (void)setTerminationHandler:(id)handler;	// 0x320ad539
// converted property getter: - (id)standardError;	// 0x320ad899
// converted property getter: - (id)standardInput;	// 0x320ad851
// converted property getter: - (id)standardOutput;	// 0x320ad875
- (BOOL)suspend;	// 0x320ad6c5
- (int)suspendCount;	// 0x320ad70d
- (void)terminate;	// 0x320ad6a1
// declared property getter: - (id)terminationHandler;	// 0x320ad515
- (int)terminationReason;	// 0x320ad581
- (int)terminationStatus;	// 0x320ad55d
@end

