/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSMutableArray, NSString, VMUTaskMemoryCache, VMUProcessDescription, NSMapTable, NSConditionLock;

@interface VMUSampler : NSObject {
	int _pid;	// 4 = 0x4
	unsigned _task;	// 8 = 0x8
	BOOL _needTaskPortDealloc;	// 12 = 0xc
	BOOL _recordThreadStates;	// 13 = 0xd
	BOOL _taskIs64Bit;	// 14 = 0xe
	NSString *_processName;	// 16 = 0x10
	VMUProcessDescription *_processDescription;	// 20 = 0x14
	CSTypeRef _symbolicator;	// 24 = 0x18
	VMUTaskMemoryCache *_memCache;	// 32 = 0x20
	sampling_context_t *_samplingContext;	// 36 = 0x24
	unsigned _mainThread;	// 40 = 0x28
	NSMapTable *_lastThreadBacktraceMap;	// 44 = 0x2c
	unsigned _numberOfCopiedBacktraces;	// 48 = 0x30
	unsigned *_previousThreadList;	// 52 = 0x34
	unsigned _previousThreadCount;	// 56 = 0x38
	unsigned _maxPreviousThreadCount;	// 60 = 0x3c
	double _tbRate;	// 64 = 0x40
	double _tbInterval;	// 72 = 0x48
	NSConditionLock *_stateLock;	// 80 = 0x50
	double _interval;	// 84 = 0x54
	double _timeLimit;	// 92 = 0x5c
	unsigned _sampleLimit;	// 100 = 0x64
	BOOL _sampling;	// 104 = 0x68
	unsigned _samplingThreadPort;	// 108 = 0x6c
	unsigned _numberOfSamples;	// 112 = 0x70
	NSMutableArray *_samples;	// 116 = 0x74
	BOOL _stacksFixed;	// 120 = 0x78
	void *_cfi;	// 124 = 0x7c
	id _delegate;	// 128 = 0x80
	double _timeSpentSamplingWithoutCFI;	// 132 = 0x84
	double _timeSpentSamplingWithCFI;	// 140 = 0x8c
	BOOL _shouldOutputSignature;	// 148 = 0x94
	BOOL _showDispatchQueueNames;	// 149 = 0x95
}
@property(assign) id delegate;	// G=0x3413b531; S=0x3413b521; converted property
@property(readonly, assign) unsigned mainThread;	// G=0x3413b511; converted property
@property(readonly, assign) int pid;	// G=0x3413b4f1; converted property
@property(assign) unsigned sampleLimit;	// G=0x3413b499; S=0x3413b489; converted property
@property(readonly, retain) NSMutableArray *samples;	// G=0x3413b701; converted property
@property(assign) double samplingInterval;	// G=0x3413b445; S=0x3413b421; converted property
@property(assign) BOOL shouldOutputSignature;	// G=0x3413b4c9; S=0x3413b4b9; converted property
@property(readonly, assign) CSTypeRef symbolicator;	// G=0x3413b4d9; converted property
@property(assign) double timeLimit;	// G=0x3413b479; S=0x3413b455; converted property
+ (void)initialize;	// 0x3413d6bd
+ (id)sampleAllThreadsOfPID:(int)pid;	// 0x3413bb6d
+ (id)sampleAllThreadsOfPID:(int)pid withSymbolicator:(id)symbolicator;	// 0x3413bb59
+ (id)sampleAllThreadsOfTask:(unsigned)task;	// 0x3413bb0d
+ (id)sampleAllThreadsOfTask:(unsigned)task symbolicate:(BOOL)symbolicate;	// 0x3413baa5
+ (id)sampleAllThreadsOfTask:(unsigned)task withSymbolicator:(id)symbolicator;	// 0x3413baf9
+ (id)sampleAllThreadsOfTask:(unsigned)task withSymbolicator:(id)symbolicator symbolicate:(BOOL)symbolicate;	// 0x3413ba8d
- (id)initWithPID:(int)pid;	// 0x3413bc59
- (id)initWithPID:(int)pid options:(unsigned)options;	// 0x3413bc19
- (id)initWithPID:(int)pid orTask:(unsigned)task options:(unsigned)options;	// 0x3413bc79
- (id)initWithTask:(unsigned)task;	// 0x3413bc39
- (id)initWithTask:(unsigned)task options:(unsigned)options;	// 0x3413bbf5
- (void)_fixupStacks:(id)stacks;	// 0x3413ca41
- (void)_makeHighPriority;	// 0x3413c1c9
- (void)_makeTimeshare;	// 0x3413c195
- (void)_runSamplingThread;	// 0x3413cbed
- (void)dealloc;	// 0x3413c075
// converted property getter: - (id)delegate;	// 0x3413b531
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)serialNumber;	// 0x3413b6b9
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)serialNumber returnedConcurrentFlag:(BOOL *)flag returnedThreadId:(unsigned long long *)anId;	// 0x3413cfd9
- (void)finalize;	// 0x3413bbb9
- (void)flushData;	// 0x3413cf49
- (void)forceStop;	// 0x3413b621
- (void)initializeSamplingContext:(BOOL)context;	// 0x3413c2f5
// converted property getter: - (unsigned)mainThread;	// 0x3413b511
// converted property getter: - (int)pid;	// 0x3413b4f1
- (void)preloadSymbols;	// 0x3413d035
- (unsigned)recordSampleTo:(id)to beginTime:(double)time endTime:(double)time3 thread:(unsigned)thread;	// 0x3413c3c5
- (id)sampleAllThreadsOnce;	// 0x3413ba05
- (unsigned)sampleCount;	// 0x3413b501
- (void)sampleForDuration:(unsigned)duration interval:(unsigned)interval;	// 0x3413b649
// converted property getter: - (unsigned)sampleLimit;	// 0x3413b499
- (id)sampleThread:(unsigned)thread;	// 0x3413b945
// converted property getter: - (id)samples;	// 0x3413b701
// converted property getter: - (double)samplingInterval;	// 0x3413b445
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3413b521
- (void)setRecordThreadStates:(BOOL)states;	// 0x3413b4a9
// converted property setter: - (void)setSampleLimit:(unsigned)limit;	// 0x3413b489
// converted property setter: - (void)setSamplingInterval:(double)interval;	// 0x3413b421
// converted property setter: - (void)setShouldOutputSignature:(BOOL)outputSignature;	// 0x3413b4b9
// converted property setter: - (void)setTimeLimit:(double)limit;	// 0x3413b455
// converted property getter: - (BOOL)shouldOutputSignature;	// 0x3413b4c9
- (BOOL)start;	// 0x3413b829
- (BOOL)stop;	// 0x3413b7a5
- (void)stopSampling;	// 0x3413b635
- (id)stopSamplingAndReturnCallNode;	// 0x3413b541
// converted property getter: - (CSTypeRef)symbolicator;	// 0x3413b4d9
- (id)threadNameForThread:(unsigned)thread;	// 0x3413b6e1
- (id)threadNameForThread:(unsigned)thread returnedThreadId:(unsigned long long *)anId returnedDispatchQueueSerialNum:(unsigned long long *)num;	// 0x3413cfa1
// converted property getter: - (double)timeLimit;	// 0x3413b479
- (BOOL)waitUntilDone;	// 0x3413b725
- (void)writeOutput:(id)output append:(BOOL)append;	// 0x3413d069
@end

