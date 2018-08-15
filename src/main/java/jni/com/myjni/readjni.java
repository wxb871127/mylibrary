package jni.com.myjni;

/**
 * Created by wxb on 2018/8/10.
 */

public class readjni {
    static {
        System.loadLibrary("native-lib");
    }

    public native String stringFromJNI();
}
