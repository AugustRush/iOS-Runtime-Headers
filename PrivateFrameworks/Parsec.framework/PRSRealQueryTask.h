/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class <PRSSessionController>, NSMutableData, NSString, NSURLSessionDataTask;

@interface PRSRealQueryTask : PRSQueryTask <PRSParsecDataHandler, PRSTriggerTask> {
    BOOL _allowLocation;
    NSMutableData *_collectedData;
    NSURLSessionDataTask *_dataTask;
    BOOL _doCache;
    BOOL _doResume;
    <PRSSessionController> *_factory;
    BOOL _failed;
    NSString *_queryString;
    float _scaleFactor;
    double _startTime;
}

@property BOOL allowLocation;
@property(retain) NSMutableData * collectedData;
@property(retain) NSURLSessionDataTask * dataTask;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL doCache;
@property BOOL doResume;
@property <PRSSessionController> * factory;
@property BOOL failed;
@property(readonly) unsigned int hash;
@property(retain) NSString * queryString;
@property float scaleFactor;
@property double startTime;
@property(readonly) Class superclass;

+ (id)existingQueryForString:(id)arg1 scaleFactor:(float)arg2 webSearch:(BOOL)arg3 handler:(id)arg4;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_processSearchResponseOnClientQueue:(id)arg1;
- (BOOL)allowLocation;
- (void)cancel;
- (id)collectedData;
- (id)dataTask;
- (void)decodeData:(id)arg1;
- (BOOL)doCache;
- (BOOL)doResume;
- (id)factory;
- (BOOL)failed;
- (id)initWithSession:(id)arg1 handler:(id)arg2 factory:(id)arg3 queue:(id)arg4 scaleFactor:(float)arg5 allowLocation:(BOOL)arg6 feedback:(id)arg7;
- (id)queryString;
- (void)resume;
- (float)scaleFactor;
- (void)setAllowLocation:(BOOL)arg1;
- (void)setCollectedData:(id)arg1;
- (void)setDataTask:(id)arg1;
- (void)setDoCache:(BOOL)arg1;
- (void)setDoResume:(BOOL)arg1;
- (void)setFactory:(id)arg1;
- (void)setFailed:(BOOL)arg1;
- (void)setQueryString:(id)arg1;
- (void)setScaleFactor:(float)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (void)triggerQuery:(BOOL)arg1;

@end
