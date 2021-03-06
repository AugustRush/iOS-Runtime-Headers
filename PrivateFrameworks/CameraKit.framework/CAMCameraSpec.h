/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMCameraSpec : NSObject {
}

@property(readonly) BOOL shouldCreateAvalancheIndicator;
@property(readonly) BOOL shouldCreateElapsedTimeView;
@property(readonly) BOOL shouldCreateFiltersButton;
@property(readonly) BOOL shouldCreateFlashButton;
@property(readonly) BOOL shouldCreateFlipButton;
@property(readonly) BOOL shouldCreateHDRButton;
@property(readonly) BOOL shouldCreateImageWell;
@property(readonly) BOOL shouldCreateModeDial;
@property(readonly) BOOL shouldCreatePanoramaView;
@property(readonly) BOOL shouldCreateShutterButton;
@property(readonly) BOOL shouldCreateSlalomIndicator;
@property(readonly) BOOL shouldCreateStillDuringVideo;
@property(readonly) BOOL shouldCreateTimerButton;
@property(readonly) BOOL shouldCreateZoomSlider;

+ (id)specForCurrentPlatform;
+ (id)specForPad;
+ (id)specForPhone;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })initialFrameForOrientation:(int)arg1;
- (BOOL)isCameraApp;
- (int)rotationStyle;
- (BOOL)shouldCreateAvalancheIndicator;
- (BOOL)shouldCreateElapsedTimeView;
- (BOOL)shouldCreateFiltersButton;
- (BOOL)shouldCreateFlashButton;
- (BOOL)shouldCreateFlipButton;
- (BOOL)shouldCreateHDRButton;
- (BOOL)shouldCreateImageWell;
- (BOOL)shouldCreateModeDial;
- (BOOL)shouldCreatePanoramaView;
- (BOOL)shouldCreateShutterButton;
- (BOOL)shouldCreateSlalomIndicator;
- (BOOL)shouldCreateStillDuringVideo;
- (BOOL)shouldCreateTimerButton;
- (BOOL)shouldCreateZoomSlider;

@end
