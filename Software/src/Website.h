const char MAIN_page[] PROGMEM = R"=====(

<!DOCTYPE html>
<html>

<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0, shrink-to-fit=no">
    <title>Untitled</title>
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css">
    <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Source+Sans+Pro:300,400,700">
</head>

<body>
    <nav class="navbar navbar-light navbar-expand-md">
        <div class="container-fluid"><a class="navbar-brand" href="#" style="color: var(--blue);">Hybride Nixie Clock</a>
            <div class="collapse navbar-collapse" id="navcol-1">
                <ul class="nav navbar-nav">
                    <li class="nav-item"></li>
                    <li class="nav-item"></li>
                </ul>
            </div>
        </div>
    </nav>
    <div>
        <center>
        <ul class="nav nav-tabs" role="tablist">
            <li class="nav-item" role="presentation"><a class="nav-link active" role="tab" data-toggle="tab" href="#tab-1">Clock Mode</a></li>
            <li class="nav-item" role="presentation"><a class="nav-link" role="tab" data-toggle="tab" href="#tab-2">Timer Settings</a></li>
            <li class="nav-item" role="presentation"><a class="nav-link" role="tab" data-toggle="tab" href="#tab-3">Temp</a></li>
        </ul>
            <div class="tab-content">
                <div class="tab-pane active" role="tabpanel" id="tab-1"><br><br>
                <p> To Change the mode click the buttons </p>
                <br>
                    <a href="/test1" class="btn btn-primary" type="button" style="margin: 4;margin-right: 5px;">Temp</a>
                    <a href="/test2" class="btn btn-primary" type="button">Clock</a>
                    <a href="/test3" class="btn btn-primary" type="button" style="margin-right: 5px;margin-left: 5px;">Timer</a>
                    <a href="/test4" class="btn btn-primary" type="button" style="margin-right: 5px;">Equalizer</a></p>
                </div>
                <div class="tab-pane" role="tabpanel" id="tab-2">
                    <p>Content for tab 2.</p>
                </div>
                <div class="tab-pane" role="tabpanel" id="tab-3">
                    <p>Content for tab 3.</p>
                </div>
            </div>
        </center>
    </div>
    <div class="d-block" style="height: 30px;">
        <div class="container" style="height: 30px;">
            <div class="row" style="height: 30px;">
                <div class="col-md-12" style="height: 30px;">
                    <div></div>
                </div>
            </div>
        </div>
    </div>
    <div class="d-block" style="height: 30px;">
        <div class="container" style="height: 30px;">
            <div class="row" style="height: 30px;">
                <div class="col-md-12" style="height: 30px;">
                    <div></div>
                </div>
            </div>
        </div>
    </div>
    <div class="btn-toolbar">
        <div class="btn-group" role="group" style="color: var(--danger);"></div>
        <div class="btn-group" role="group"></div>
    </div>
    <script src="https://code.jquery.com/jquery-3.5.1.min.js"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/js/bootstrap.min.js"></script>
</body>

</html>
)=====";